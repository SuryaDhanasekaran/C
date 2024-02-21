#include<stdio.h>

int main()
{

    int c,d,temp;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&c,&d);
    printf("\nBefore swapping: %d %d",c,d);
    temp = c;
    c = d;
    d = temp;
    printf("\nAfter swapping: %d %d",c,d);
    return 0;
}