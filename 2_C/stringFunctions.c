#include<stdio.h>
#include<string.h>

void main()
{
    char str1[20] ="Mall";
    char str2[20] = "Male";

    // strcpy(str2,str1);
    // strcpy(str2,&str1[3]);
    // strncpy(str2,str1,5);
    // printf("%s",str2);

    // strcat(str1,&str2[4]);

    // printf("%d\n",strcmp(str1,str2));

    printf("%d\n",strncmp(str1,str2,3));

    // return 0 - both strings are equal
    // return 1 - string 1 greater
    // return -1 - string 2 greater


    // printf("%s",str1);
}