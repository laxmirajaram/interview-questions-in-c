// Online C compiler to run C program online
#include <stdio.h>
void number(int i)
    {
     if(i>11)
     {
         return;
     }
     if(i%2==0)
     {
         printf("%d is even \n",i);
     }
     else
     {
         printf("%d is odd \n",i);
     }
     number(i+1);
    }
    void main()
    {
        number(-7);
    }
    