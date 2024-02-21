#include<stdio.h>
void main()
{
    struct student
    {
        char name[20];
    };
    struct student s1,s2;

    printf("Enter the Name:");
    gets(s1.name);
    printf("\nYour name is %s",s1.name);
}