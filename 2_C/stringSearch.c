#include<stdio.h>
#include<string.h>

void main()
{
    char a[20];
    char b[20];
    printf("Enter the string:");
    gets(a);
    printf("Enter the string to be searched:");
    gets(b);
    printf("%u",strstr(a,b));
    if(strstr(a,b))
    {
        printf("\nString found");
    }
    else
    {
        printf("\nString not found");
    }

}