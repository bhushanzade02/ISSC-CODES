#ifndef FUN_H
#define FUN_H

#include "param.h"



typedef struct{
    int buf[2][MAX_BUF];  //buf[0] = out , buf[1] = in
}Port;


typedef struct{
    int length ;
    char src_mac ;
    char dst_mac ;
    int net ;
    int host ;
    char type ;
    char data[100];
}Packet;




/* Global ports   extern- somewhere declared  */
 extern Port port_T1 ;
 extern Port port_T2 ;
 extern Port port_T3 ;
 extern Port port_LAN ;

// function declaration 
void TestP1();
void TestP2();
void TestP3();
void LAN();
int prob(int P);


#endif