#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fun.h"

Port port_T1, port_T2, port_T3;
Port port_LAN1, port_LAN2;
Port port_R1, port_R2;

// ---------------- Probability ----------------
int prob(int P) {
    return (rand() % 100 < P);
}

// ---------------- Random MAC ----------------
char random_dest_mac(char self) {
    char macs[] = {'A', 'B', 'C'};
    char dst;
    do {
        dst = macs[rand() % 3];
    } while (dst == self);
    return dst;
}

// ---------------- Test Programs ----------------

void TestP1() {
    if (port_T1.buf[1][0] > 0) {
        printf("P1 received: ");
        for (int i = 5; i <= port_T1.buf[1][0]; i++)
            printf("%c", port_T1.buf[1][i]);
        printf("\n");
        port_T1.buf[1][0] = 0;
    }

    if (prob(5) && port_T1.buf[0][0] == 0) {
        Packet p;
        strcpy(p.data, "Msg from P1");
        p.length = strlen(p.data);
        p.src_mac = 'A';
        p.dst_mac = random_dest_mac('A');
        p.net = (p.dst_mac == 'C') ? 8 : 7; // if C, send to LAN2
        printf("P1 sending to %c (Net %d): %s\n", p.dst_mac, p.net, p.data);

        port_T1.buf[0][0] = p.length + 5;
        port_T1.buf[0][1] = p.src_mac;
        port_T1.buf[0][2] = p.dst_mac;
        port_T1.buf[0][3] = 'D';
        port_T1.buf[0][4] = p.net;
        for (int i = 0; i < p.length; i++)
            port_T1.buf[0][5 + i] = p.data[i];
    }
}

void TestP2() {
    if (port_T2.buf[1][0] > 0) {
        printf("P2 received: ");
        for (int i = 5; i <= port_T2.buf[1][0]; i++)
            printf("%c", port_T2.buf[1][i]);
        printf("\n");
        port_T2.buf[1][0] = 0;
    }

    if (prob(5) && port_T2.buf[0][0] == 0) {
        Packet p;
        strcpy(p.data, "Msg from P2");
        p.length = strlen(p.data);
        p.src_mac = 'B';
        p.dst_mac = random_dest_mac('B');
        p.net = (p.dst_mac == 'C') ? 8 : 7;
        printf("P2 sending to %c (Net %d): %s\n", p.dst_mac, p.net, p.data);

        port_T2.buf[0][0] = p.length + 5;
        port_T2.buf[0][1] = p.src_mac;
        port_T2.buf[0][2] = p.dst_mac;
        port_T2.buf[0][3] = 'D';
        port_T2.buf[0][4] = p.net;
        for (int i = 0; i < p.length; i++)
            port_T2.buf[0][5 + i] = p.data[i];
    }
}

void TestP3() {
    if (port_T3.buf[1][0] > 0) {
        printf("P3 received: ");
        for (int i = 5; i <= port_T3.buf[1][0]; i++)
            printf("%c", port_T3.buf[1][i]);
        printf("\n");
        port_T3.buf[1][0] = 0;
    }

    if (prob(5) && port_T3.buf[0][0] == 0) {
        Packet p;
        strcpy(p.data, "Msg from P3");
        p.length = strlen(p.data);
        p.src_mac = 'C';
        p.dst_mac = random_dest_mac('C');
        p.net = (p.dst_mac == 'A' || p.dst_mac == 'B') ? 7 : 8;
        printf("P3 sending to %c (Net %d): %s\n", p.dst_mac, p.net, p.data);

        port_T3.buf[0][0] = p.length + 5;
        port_T3.buf[0][1] = p.src_mac;
        port_T3.buf[0][2] = p.dst_mac;
        port_T3.buf[0][3] = 'D';
        port_T3.buf[0][4] = p.net;
        for (int i = 0; i < p.length; i++)
            port_T3.buf[0][5 + i] = p.data[i];
    }
}

// ---------------- LAN 1 ----------------
void LAN1() {
    int active = 0, sender = -1;

    if (port_T1.buf[0][0] > 0) { active++; sender = 1; }
    if (port_T2.buf[0][0] > 0) { active++; sender = 2; }
    if (port_R1.buf[0][0] > 0) { active++; sender = 3; }

    if (active == 0) return;
    if (active > 1) {
        printf("Collision on LAN1!\n");
        port_T1.buf[0][0] = port_T2.buf[0][0] = port_R1.buf[0][0] = 0;
        return;
    }

    Port *src;
    if (sender == 1) src = &port_T1;
    else if (sender == 2) src = &port_T2;
    else src = &port_R1;

    int len = src->buf[0][0];
    for (int i = 0; i <= len; i++) {
        port_T1.buf[1][i] = src->buf[0][i];
        port_T2.buf[1][i] = src->buf[0][i];
        port_R1.buf[1][i] = src->buf[0][i];
    }
    src->buf[0][0] = 0;
}

// ---------------- LAN 2 ----------------
void LAN2() {
    int active = 0, sender = -1;

    if (port_T3.buf[0][0] > 0) { active++; sender = 1; }
    if (port_R2.buf[0][0] > 0) { active++; sender = 2; }

    if (active == 0) return;
    if (active > 1) {
        printf("Collision on LAN2!\n");
        port_T3.buf[0][0] = port_R2.buf[0][0] = 0;
        return;
    }

    Port *src = (sender == 1) ? &port_T3 : &port_R2;
    int len = src->buf[0][0];
    for (int i = 0; i <= len; i++) {
        port_T3.buf[1][i] = src->buf[0][i];
        port_R2.buf[1][i] = src->buf[0][i];
    }
    src->buf[0][0] = 0;
}

// ---------------- Router ----------------
void Router() {
    // Packet from LAN1
    if (port_R1.buf[1][0] > 0) {
        int net = port_R1.buf[1][4];
        if (net == 8 && port_R2.buf[0][0] == 0) {
            int len = port_R1.buf[1][0];
            for (int i = 0; i <= len; i++)
                port_R2.buf[0][i] = port_R1.buf[1][i];
            port_R1.buf[1][0] = 0;
            printf("Router: Forwarded from LAN1 --> LAN2\n");
        } else {
            port_R1.buf[1][0] = 0;
        }
    }

    // Packet from LAN2
    if (port_R2.buf[1][0] > 0) {
        int net = port_R2.buf[1][4];
        if (net == 7 && port_R1.buf[0][0] == 0) {
            int len = port_R2.buf[1][0];
            for (int i = 0; i <= len; i++)
                port_R1.buf[0][i] = port_R2.buf[1][i];
            port_R2.buf[1][0] = 0;
            printf("Router: Forwarded from LAN2 -- > LAN1\n");
        } else {
            port_R2.buf[1][0] = 0;
        }
    }
}