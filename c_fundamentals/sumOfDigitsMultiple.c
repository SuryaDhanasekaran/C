#include<stdio.h>

int main()
{

    long n,sum;
    char option;
    do
    {
        printf("\nEnter the number:");
    scanf("%d%c",&n,&option);

    // n = 12345;
    sum = 0;
    while(n>0)
    {
        sum = sum + (n%10);
        n = n/10;
    }

    printf("\nSum = %ld",sum);
    printf("\nDo you want to continue?(y/n)");
    option = getchar();
    }
    while(option == 'y');
}