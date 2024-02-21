#include<stdio.h>
int main()
{

    char in[] = "My name is India. I have 120 crores of people!";

    int i;
    char c;
    int vc,cc;
    vc = cc = 0;

    printf("\nEnter the string:");
    gets(in);

    for(i=0;in[i]!='\0';i++)
    {
        c = in[i];

        if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            switch (c)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vc++;
                    break;
                default:
                    cc++;
           
            }
        }
    }   
    printf("\nString Analysis for Vowels & Consonants");
    printf("\nInput String = %s",in);
    printf("\nVowels = %d",vc);
    printf("\nConsonants = %d",cc);
}