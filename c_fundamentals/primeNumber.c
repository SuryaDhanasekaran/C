#include<stdio.h>
#include<math.h>

int main()

{
    long nn=0;
    long pc = 0;
    long i;
    int upto;
    int primeflag;

    printf("\nS.No     Prime Number");

    while(pc<100)
    {
        ++nn;

        upto = sqrt(nn);
        primeflag = 1;

        for(i=2;i<=upto;i++)
        {
            if(nn%i==0)
            {
                primeflag = 0;
                break;
            }
        }
        if(primeflag==1)
        {
            printf("\n%3ld       %ld",++pc,nn);
        }
    }
}