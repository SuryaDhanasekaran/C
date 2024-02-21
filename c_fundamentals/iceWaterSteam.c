#include<stdio.h>

int main()
{
    float temp;

    printf("\nEnter the temperature:");
    scanf("%f",&temp);

    if(temp<0)
        printf("\nICE");
    else if(temp>100)
        printf("\nWATER");
    else
        printf("\nSTEAM");
}