#include <stdio.h>
void multiple(int i)
{
    if(i>11)
    {
        return;
    }
    printf("i=%d \n",i*7);
    multiple(i+1);
}
void main()
{
    multiple(1);
}