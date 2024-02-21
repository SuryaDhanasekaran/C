#include<stdio.h>
int main()
{
    char str[10];

    printf("\nEnter the string:");
    gets(str);

    str[0] -= 30;
    str[1] -= 30;
    str[2] -= 30;
    str[3] -= 30;
    str[4] -= 30;
    
    printf("\n%s",str);
}