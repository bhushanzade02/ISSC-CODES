#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "param.h"
#include "fun.h"


int main()
{

   srand(time(NULL));

   for(int i =0 ; i < 100 ; i++)
   {
    TestP1();
    TestP2();
    TestP3();
    LAN();
   }
    return 0 ;
}