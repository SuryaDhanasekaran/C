#include<math.h>
#include<stdio.h>
int main()
{
    int n;
    int i,isprime,upto;

    int f1,f2,f3,isfibo;

    do
    {
        printf("\nEnter the number:");
        scanf("%d",&n);

        if(n==0) break;

        isprime = 1;

        upto = sqrt(n);

        for(i=2;i<=upto;i++)
        {
            if(n%i==0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime)
        {
            printf("\nPrime");
        }
        else
        {
            printf("\nNot Prime");
        }

        isfibo = 0;
        f1 = f2 = 1;
        while(f2<=n)
        {
            if(f2==n)
            {
                isfibo = 1;
                break;
            }
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        if(isfibo)
        {
            printf("\nFibonacci");
        }
        else
        {
            printf("\nNot Fibonacci");
        }
    }while(n!=0);
}