#include<stdio.h>

int main()
{
    int i;
    int sum=0;

    for(i=2;i<100;i+=3)
    {
        if(i%5==0)
        {
            sum = sum + i;
        }
    }
    printf("\nSum = %d",sum);
}