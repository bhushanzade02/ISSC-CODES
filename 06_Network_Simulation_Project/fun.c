#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "fun.h"


Port port_T1 , port_T2 , port_T3, port_LAN;


// probability function 

int prob(int P)
{
    int N = 100 ;
    int k = rand() % N ;
    return (k , P);
}

//utility to get random destination mac
char random_dest_mac(char self)
{
    char macs[] = {'A','B','C'};
    char dst ; 
    do{
        dst = macs[rand()%3];
    } while (dst == self);
    return dst;
}

// testp1 
void TestP1()
 {
    if(port_T1.buf[1][0] > 0 )
    {
        printf("test recieved packet : ");
        for(int i = 1; i <= port_T1.buf[1][0]; i++)
        {
            printf("%c", port_T1.buf[1][i]);
        }
        printf("\n");
        port_T1.buf[1][0] = 0 ;
    }

    if(prob(10) && port_T1.buf[0][0] == 0)
    {
        Packet p ;
        strcpy(p.data , "msg form P1");
        p.length = strlen(p.data);
        p.src_mac = 'A';
        p.dst_mac = random_dest_mac('A');  // random dest
        p.net = 7 ;
        p.host = 2 ; 
        p.type = 'D';
        
        printf("TestP1 sent to %c : %s\n",p.dst_mac, p.data);

        port_T1.buf[0][0] = p.length + 2 ;
        port_T1.buf[0][1] = p.src_mac;
        port_T1.buf[0][2] = p.dst_mac;
        for(int i = 0 ; i <= p.length; i++)
        {
            port_T1.buf[0][3+i] = p.data[i];
        }
    }

 }


 void TestP2()
 {
    if(port_T2.buf[1][0] >  0)
    {
        char dst = port_T2.buf[1][2];
        if (dst == 'B'){
        printf("testp2 receivd: ");
        for(int i =3 ; i <= port_T2.buf[1][0]; i++)
        {
            printf("%c", port_T2.buf[1][i]);
        }

        printf("\n");}
        port_T2.buf[1][0] = 0 ;
    }


    if(prob(10) && port_T2.buf[0][0] == 0){
        Packet p ;
        strcpy(p.data, "Msg from p2");
        p.length = strlen(p.data);
        p.src_mac = 'B' ;
        p.dst_mac = random_dest_mac('B');
        p.type ='D';
        printf("TestP2 sent %c : %s\n",p.dst_mac, p.data);

        port_T2.buf[0][0] = p.length + 2;
        port_T2.buf[0][1] = p.src_mac;
        port_T2.buf[0][2] = p.dst_mac;
        for(int i =1 ; i <= p.length; i++)
        {
            port_T2.buf[0][3+i] = p.data[i];
        }
    }
 }



 void TestP3()
 {
    if(port_T3.buf[1][0] > 0 ){
        char dst = port_T3.buf[1][2];
        if(dst == 'C'){
        printf("testP3 received: ");
        for(int i =3 ; i <= port_T3.buf[1][0];i++)
        {
            printf("%c",port_T3.buf[1][i]);
        }
        printf("\n");}
        port_T3.buf[1][0] =0 ;
    }
    if(prob(10) && port_T3.buf[0][0] == 0 ){
        Packet p ;
        strcpy(p.data, "Msg from P3");
        p.length = strlen(p.data);
        p.src_mac = 'C';
        p.dst_mac = random_dest_mac('C');
        p.type = 'D';
        printf("testP3 sent %c : %s\n",p.dst_mac,p.data);
        port_T3.buf[0][0] = p.length + 2 ;
        port_T3.buf[0][1] = p.src_mac;
        port_T3.buf[0][2] = p.dst_mac;
        for(int i = 1 ; i <= p.length; i++)
        {
            port_T3.buf[0][3+i]= p.data[i];
        }

    }
 }




 // __________________ lan logic ________________________

 void LAN()
 {
    int activeInputs = 0 ;
    int sender = -1 ;


    // check who is sending 
    if(port_T1.buf[0][0] > 0)
    {
        activeInputs++ ;
        sender = 1 ;
    }
    
    if(port_T1.buf[0][0] > 0)
    {
        activeInputs++ ;
        sender = 2 ;
    }

    if(port_T1.buf[0][0] > 0)
    {
        activeInputs++ ;
        sender = 3 ;
    }

    if ( activeInputs == 0 ) return ; // no sender 
    if (activeInputs > 1 )
    {
        printf("collision detected on LAN ! packet lost . \n");
        port_T1.buf[0][0] = 0 ;
        port_T2.buf[0][0] = 0 ;
        port_T3.buf[0][0] = 0 ;
        return ;
    }

    // exactly one sender 
    Port *src ;
    if(sender ==1 ) src == &port_T1;
    else if (sender ==2 ) src = &port_T2;
    else src = &port_T3;


    int len = src -> buf[0][0];
    for(int i =0 ; i <= len ; i++)
    {
        port_T1.buf[1][i] = src->buf[0][i];
        port_T2.buf[1][i] = src->buf[0][i];
        port_T3.buf[1][i] = src->buf[0][i];
    }
    src->buf[0][0] = 0 ;   // clear sender buffer 

 }


//  void LAN() {
//     if(port_T1.buf[0][0] > 0 && port_T2.buf[1][0]==0)
//     {
//         int len = port_T1.buf[0][0];
//         for(int i =0 ; i <= len ; i++)
//         {
//             port_T2.buf[1][i] = port_T1.buf[0][i];
//         }
//         port_T1.buf[0][0]=0;
//     }
//  }