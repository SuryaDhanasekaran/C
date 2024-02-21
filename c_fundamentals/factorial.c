#include<stdio.h>

int main()
{
    long fact = 1;
    int i, n;

    printf("\nEnter the value of n(1-15):");
    scanf("%d",&n);

    printf("\nN Value Factorial");
    printf("\n------- --------");
    for(i=1;i<=n;i++)
    {
        fact = fact * i;

        printf("\n%-7d  %ld",i,fact);
    }
}