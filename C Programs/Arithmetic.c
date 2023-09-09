/**
 * Arithmetic Operators
 * * / % - high precedence
 * + -
 */

#include<stdio.h>
int main()
{
    int a,b,c;
    float x;
    printf("\nEnter 2 Nos : ");
    scanf("%d%d",&a,&b);//to get user input %d%d(two values a and b) {&a-Store value in a}
    c = a + b;
    printf("\nTotal : %d",c);
    c = a - b;
    printf("\nDifference : %d",c);
    c = a * b;
    printf("\nMultiplication : %d",c);
    x = (float)a / (float)b;//type conversion
    printf("\nDivison : %0.2f",x);//Quotient
    c = a % b;
    printf("\nModulo : %d",c);//remainder
    return 0;
}