#include<stdio.h>
int main() 
{
    int n;

    float num;
    float res = 1;
    int i;

    printf("\nHow many numbers:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%f",&num);

        res = res * num;

        
    }

    printf("\nResult = %f",res);
}