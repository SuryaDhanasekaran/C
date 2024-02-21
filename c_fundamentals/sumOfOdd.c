#include<stdio.h>

int main()
{
    int i,j;
    int sum=0;

    for(i=1,j=1;j<=100;i+=2,j++)
    {
        sum = sum + i;
    }
    printf("\nSum = %d",sum);
}