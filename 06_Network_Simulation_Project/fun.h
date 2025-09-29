#include "param.h"

/* Structure + decalrations */ 
// port has an input and output buffer

#ifndef FUN_H
#define FUN_H

typedef struct Port
{
    int buf[2][MAX_BUF];   // buf[0] = out , buf[1] = in
};


// packet structure
typedef struct packet{
    int length ;    //byte count
    char smac;      // source mac (a-z)
    int net ;       //network number
    int host;       // host number
    char type;      //'D' =data , 'A'=Ack 
    char data[100]; // payload
};


extern Port port_T1;
extern Port port_T2;
extern Port port_LAN;


// Function Declaration 
void TestP1();
void TestP1();
void LAN();
int prob(int P);

#endif