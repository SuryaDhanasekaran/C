#include<stdio.h>
int main()
{
    char s[80];

    int i;

    printf("\nEnter the string:");
    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        s[i]--;
    }
    printf("\nResulting string:\n %s",s);
}