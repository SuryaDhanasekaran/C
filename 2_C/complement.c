// 1's Complement:

// 35 -> binary -> 00100011
// 11011100 

// 2's Complement:

// 35 -> binary -> 00100011
// 1s Complement
// 2s complement -> 1s complement + 1


#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("1's complement:");
    printf("%d",~a);
    printf("\n2's complement:");
    printf("%d",~a+1);
    return 0;
}