#ifndef FUN_H
#define FUN_H


#include "param.h"

typedef struct Port{
    int buf[2][MAX_BUF];  //buf[0] = out , buf[1] = in
} ;


typedef struct Packet {
    int length ;
    char smac ;
    int net ;
    int host ;
    char type ;
    char data[100];
} ;




/* Global ports   extern- somewhere declared  */
 extern port_T1 ;
 extern port_T2 ;
 extern port_LAN ;

// function declaration 
void TestP1();
void TestP2();
void LAN();
int prob(int P);


#endif