// F = P(1 + i)^n
// P = principal
// i = r/100;
// i = interest rate
// n = no. of months

#include<stdio.h>
#include<math.h>
int main()
{
    float p,n,r,i,F;
    // p = 5000;
    // r = 12;
    // n = 5;

    printf("\n Enter Principal, Rate and Time");
    scanf("%f %f %f",&p,&r,&n);
    i = r / 100;
    F = p*pow(1+i,n);
    printf("%.2f",F);

}