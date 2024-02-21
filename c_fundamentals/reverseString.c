#include<stdio.h>
int main()
{
    char text[80];
    char backtext[80];

    int i,j;

    printf("\nEnter a string:\n");
    gets(text);

    for(i=0;text[i]!='\0';i++)
    {
        ;
    }

    for(--i,j=0;i>=0;i--,j++)
    {
        backtext[j] = text[i];
    }
    backtext[j] = '\0';
    printf("\nReverse string:%s",backtext);
}