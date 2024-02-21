#include<stdio.h>

int main()
{
    // char in[80] = "This is 007 from !#*     Russia.!";
    char in[80];

    printf("\nEnter the string:");
    gets(in);

    int ac,dc,wsc,oc;
    int i;
    char c;

    ac = dc = wsc = oc = 0;

    for(i=0;in[i]!='\0';i++)
    {
        c = in[i];

        if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            ac++;
        }
        else if (c>='0' && c<='9')
        {
            dc++;
        }
        else if(c==' ' || c=='\t' || c=='\n')
        {
            wsc++;
        } 
        else
        {
            oc++;
        }
    }
    printf("\nString Analysis - Results:\n");
    printf("\nAlphabets = %d",ac);
    printf("\nDigits = %d",dc);
    printf("\nWhite Spaces = %d",wsc);
    printf("\nOthers = %d",oc);
}