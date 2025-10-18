#ifndef FUN_H
#define FUN_H

#include "param.h"

typedef struct {
    int buf[2][MAX_BUF];   // buf[0]=out, buf[1]=in
} Port;

typedef struct {
    int length;
    char src_mac;
    char dst_mac;
    int net;
    int host;
    char type;
    char data[100];
} Packet;

// Global ports
extern Port port_T1, port_T2, port_T3;
extern Port port_LAN1, port_LAN2;  // two LANs
extern Port port_R1, port_R2;      // router side of each LAN

// Function declarations
void TestP1();
void TestP2();
void TestP3();
void LAN1();
void LAN2();
void Router();
int prob(int P);
char random_dest_mac(char self);

#endif
