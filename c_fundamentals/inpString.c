#include<stdio.h>
int main()
{
    char a;
    char s[100];

    printf("Enter the character:\n");

    a = getchar();
    gets(s);

    printf("\nYour entered A = %c Name = %s",a,s);
}