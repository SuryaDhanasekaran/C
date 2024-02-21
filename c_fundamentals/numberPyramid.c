#include<stdio.h>
int main()
{
    int n=10;
    int i,j,k;

    int ncount;

    for(i=1;i<=n;i++)
    {
        printf("\n");

        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        ncount = (i-1)*2+1;

        for(j=1,k=1;k<=ncount;k++)
        {
            printf("%d",j%10);

            if(k<(ncount+1)/2)
            {
                j++;
            }
            else
            {
                j--;
            }
        }
    }
}