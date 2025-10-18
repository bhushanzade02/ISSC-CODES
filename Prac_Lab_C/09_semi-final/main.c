#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "param.h"
#include "fun.h"

int main() {
    srand(time(NULL));
    printf("=== Two LAN + Router Simulation ===\n");

    for (int i = 0; i < 100; i++) {
        // printf("\n--- Step %d ---\n", i+1);
        TestP1();
        TestP2();
        TestP3();
        LAN1();
        Router();
        LAN2();
    }

    printf("=== Simulation End ===\n");
    return 0;
}
