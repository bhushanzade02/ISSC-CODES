#include <mpi.h>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    MPI_Init(&argc, &argv);

    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    int rowsA, colsA, rowsB, colsB;
    vector<int> A, B, C;

    if (rank == 0) {
        cout << "Enter rows and columns of matrix A: ";
        cin >> rowsA >> colsA;
        cout << "Enter rows and columns of matrix B: ";
        cin >> rowsB >> colsB;

        if (colsA != rowsB) {
            cout << "Matrix multiplication not possible!" << endl;
            MPI_Abort(MPI_COMM_WORLD, -1);
        }

        A.resize(rowsA * colsA);
        B.resize(rowsB * colsB);
        C.resize(rowsA * colsB);

        cout << "Enter elements of matrix A (" << rowsA << "x" << colsA << "):\n";
        for (int i = 0; i < rowsA * colsA; i++) cin >> A[i];

        cout << "Enter elements of matrix B (" << rowsB << "x" << colsB << "):\n";
        for (int i = 0; i < rowsB * colsB; i++) cin >> B[i];
    }

    // Broadcast dimensions
    MPI_Bcast(&rowsA, 1, MPI_INT, 0, MPI_COMM_WORLD);
    MPI_Bcast(&colsA, 1, MPI_INT, 0, MPI_COMM_WORLD);
    MPI_Bcast(&rowsB, 1, MPI_INT, 0, MPI_COMM_WORLD);
    MPI_Bcast(&colsB, 1, MPI_INT, 0, MPI_COMM_WORLD);

    // Broadcast matrix B (every process needs it)
    if (rank != 0) B.resize(rowsB * colsB);
    MPI_Bcast(B.data(), rowsB * colsB, MPI_INT, 0, MPI_COMM_WORLD);

    // Calculate send counts and displacements for variable row distribution
    vector<int> sendcounts(size), displs(size);
    int base_rows = rowsA / size;
    int extra = rowsA % size;

    int offset = 0;
    for (int i = 0; i < size; i++) {
        int rows_for_proc = base_rows + (i < extra ? 1 : 0);
        sendcounts[i] = rows_for_proc * colsA;
        displs[i] = offset;
        offset += sendcounts[i];
    }

    int local_rows = sendcounts[rank] / colsA;
    vector<int> localA(sendcounts[rank]);
    vector<int> localC(local_rows * colsB);

    // Scatter variable rows of A
    MPI_Scatterv(A.data(), sendcounts.data(), displs.data(), MPI_INT,
                 localA.data(), sendcounts[rank], MPI_INT, 0, MPI_COMM_WORLD);

    // Compute local result
    for (int i = 0; i < local_rows; i++) {
        for (int j = 0; j < colsB; j++) {
            int sum = 0;
            for (int k = 0; k < colsA; k++) {
                sum += localA[i * colsA + k] * B[k * colsB + j];
            }
            localC[i * colsB + j] = sum;
        }
    }

    // Prepare recv counts and displacements for gathering results
    vector<int> recvcounts(size), recvdispls(size);
    if (rank == 0) {
        offset = 0;
        for (int i = 0; i < size; i++) {
            int rows_for_proc = base_rows + (i < extra ? 1 : 0);
            recvcounts[i] = rows_for_proc * colsB;
            recvdispls[i] = offset;
            offset += recvcounts[i];
        }
    }

    // Gather all results (variable sizes)
    MPI_Gatherv(localC.data(), local_rows * colsB, MPI_INT,
                C.data(), recvcounts.data(), recvdispls.data(), MPI_INT,
                0, MPI_COMM_WORLD);

    // Print final result
    if (rank == 0) {
        cout << "\nResultant Matrix C = A × B:\n";
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsB; j++)
                cout << C[i * colsB + j] << " ";
            cout << endl;
        }
    }

    MPI_Finalize();
    return 0;
}
