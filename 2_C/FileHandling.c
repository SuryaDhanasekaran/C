//Program stored in a external file 

#include<stdio.h>

void main()
{
    FILE *fp;
    int age;
    char name[20];
    // int a = 10;
    // char str[20];
    // fp = fopen("first.txt","w");

    printf("Enter your name & age:");
    scanf("%s %d",&name,&age);
    fp = fopen("Demo.txt","w");

    fprintf(fp,"Name : %s \n Age : %d",name,age);
    // fprintf(fp,"Hi Guys  %d",a);


    // if(fp == NULL)
    // {
    //     printf("Error!");
    // }
    // else
    // {
    //     printf("File Created!");
    // }
    // fprintf(fp,"This is My First Program in File Handling")
    // while(fscanf(fp,"%s",str)!=EOF)//End of file
    // {
    //         printf("%s ",str);
    // }


    fclose(fp);

}