// C = (5/9) x (F - 32)
#include<stdio.h>
int main()
{
    float F,C;

    // F = 68;
    printf("\nEnter Farenheit:");
    scanf("%f",&F);

    C = ((float)5/9) * (F-32);

    printf("\nC = %f",C);
}