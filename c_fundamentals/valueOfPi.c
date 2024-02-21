#include<stdio.h>

int main()
{
    int i,j,mf;

    float pi = 0;

    mf = 1;

    printf("\nTerm    PI Value");
    for(i=1,j=1;j<=100;i+=2,j++)
    {
        pi = pi + (4.0/i)*mf;
        printf("\n%-4d    %f",j,pi);
        mf = -mf;
       
    }

}