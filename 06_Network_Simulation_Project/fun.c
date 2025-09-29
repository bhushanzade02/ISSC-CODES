#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "fun.h"



Port port_T1, port_T2, port_LAN;

// probability function (return 1 with probability P%)

int prob(int P)
{
    int N = 100;
    int k = rand() % N;
    return ( k < P );

}


// TestP1 : sometimes send packages
void TestP1()
{
    // checked if received something 
    if(port_T1.buf[1][0] > 0)
    {
        printf("test receive packet : ");
        for(int i =1 ; i<= port_T1.buf[1][0];i++)
        {
            printf("%c",port_T1.buf[1][i]);
        }
        print("\n");
        port_T1.buf[1][0]=0;   //clear buffer
    }



        // with 10 % probability send packet
    if (prob(10) && port_T1.buf[0][0] == 0)
    {
        Packet p ;
        strcpy(p.data, "hello From p1");
        p.length = strlen(p.data);
        p.smac = 'A';
        p.net = 7;

    }

}







