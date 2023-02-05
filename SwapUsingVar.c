//Write program to swap a 2 numbers using third variable

#include<stdio.h>
int main()
{
    double first,second,temp;
    printf("Enter first number: ");
    scanf("%lf",&first);
    printf("Enter second number:");
    scanf("%lf",&second);

    temp = first;
    first = second;
    second = temp;

    printf("\nAfter swapping, first number = %.2lf\n",first);
    printf("\nAfter swapping, second number = %.2lf",second);
    return 0;
}

