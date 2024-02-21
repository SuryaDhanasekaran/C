#include<stdio.h>
int main()
{
    int sum=0;
    int i;

    for(i=2;i<=30;i+=2)
    {
        sum = sum + i;
        printf("\n%5d %5d",i,sum);
    }
    printf("\nSum = %d",sum);
}