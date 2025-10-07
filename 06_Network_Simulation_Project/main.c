#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "param.h"
#include "fun.h"



int main()
{

   srand(time(NULL));


   for(int i =0 ; i < 50 ; i++)
   {
    TestP1();
    LAN();
    TestP2();
   }
    return 0 ;
}