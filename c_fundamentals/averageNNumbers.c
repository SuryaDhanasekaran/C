#include<stdio.h>
int main()
{
    int n;
    float sum = 0.0;
    float in;
    int i;

    printf("\nEnter the number:");
    scanf("%d",&n);

    printf("\nEnter the numbers one by one:");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&in);
        sum = sum + in;
    }
    printf("\nSum=%f Average = %f",sum,sum/n);

}