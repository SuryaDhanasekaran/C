//Program stored in a external file 

#include<stdio.h>

void main()
{
    FILE *fp;
    char str[20];
    // fp = fopen("first.txt","w");
    fp = fopen("first.txt","r");


    if(fp == NULL)
    {
        printf("Error!");
    }
    else
    {
        printf("File Created!");
    }
    // fprintf(fp,"This is My First Program in File Handling")
    while(fscanf(fp,"%s",str)!=EOF)//End of file
    {
            printf("%s ",str);
    }


    fclose(fp);

}