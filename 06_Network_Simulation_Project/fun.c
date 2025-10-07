#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "fun.h"


Port port_T1 , port_T2 , port_LAN;




// probability function 

int prob(int P)
{
    int N = 100 ;
    int k = rand() % N ;
    return (k , P);
}


// testp1 = sometime send packets 
void TestP1()
 {
    if(port_T1.buf[1][0] > 0 )
    {
        printf("test recieved packet : ");
        for(int i =0 ; i <= port_T1.buf[1][0]; i++)
        {
            printf("%c", port_T1.buf[1][i]);
        }
        printf("\n");
        port_T1.buf[1][0] = 0 ;
    }

    if(prob(10) && port_T1.buf[0][0] == 0)
    {
        Packet p ;
        strcpy(p.data , "hello  form P1");
        p.length = strlen(p.data);
        p.smac = 'A';
        p.net = 7 ;
        p.host = 2 ; 
        p.type = 'D';


        printf("TestP1 sent : %s\n",p.data);

        port_T1.buf[0][0] = p.length;
        for(int i = 1 ; i <= p.length; i++)
        {
            port_T1.buf[0][i] = p.data[i-1];
        }
    }

 }


 void TestP2()
 {
    if(port_T2.buf[1][0] >  0)
    {
        printf("testp2 receivd: ");
        for(int i =1 ; i <= port_T2.buf[1][0]; i++)
        {
            printf("%c", port_T2.buf[1][i]);
        }

        printf("\n");
        port_T2.buf[1][0] = 0 ;
    }
 }



 void LAN() {
    if(port_T1.buf[0][0] > 0 && port_T2.buf[1][0]==0)
    {
        int len = port_T1.buf[0][0];
        for(int i =0 ; i <= len ; i++)
        {
            port_T2.buf[1][i] = port_T1.buf[0][i];
        }
        port_T1.buf[0][0]=0;
    }
 }