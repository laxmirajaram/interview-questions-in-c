#include <stdio.h>
int main()
{
    int rows;
    int colums;
    printf("enter the number of rows:\n");
    scanf("%d",&rows);
    printf("enter the number of columns:\n");
    scanf("%d",&colums);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=colums;j++)
        {
            if(i==rows||j==colums||i+j>=(rows+1))
            {
                printf("*");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}