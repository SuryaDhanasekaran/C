#include<stdio.h>

int main()
{

    long n,sum;

    printf("\nEnter the number:");
    scanf("%ld",&n);

    // n = 12345;
    sum = 0;

    while(n>0)
    {
        sum = sum + (n%10);
        n = n/10;
    }

    printf("\nSum = %ld",sum);

}