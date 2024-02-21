#include<stdio.h>
int main()
{
    char s[80];
    int i=0;

    printf("\nEnter the string:");
    gets(s);

    while (s[i])
    {
        printf("ASCII value of %c = %d\n",s[i],s[i]);
        i++;
    }
}