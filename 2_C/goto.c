#include<stdio.h>
void main()
{
    int a,b,i=0;
    again:
    printf("\nEnter two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nAddition is %d",a+b);
    i++;
    if(i<3)
    goto again;
}