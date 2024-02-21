#include<stdio.h>
int main()
{
    long sum = 0;
    int i;

    int n;
    // n = 5;
    printf("\nEnter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("\nSum = %ld",sum);
}