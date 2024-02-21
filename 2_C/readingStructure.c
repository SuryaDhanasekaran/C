#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
};
void main()
{
    struct student s1,s2;
    printf("\nEnter Student 1 Roll no:");
    scanf("%d",&s1.rollno);
    printf("\nEnter the Name:");
    scanf("%s",s1.name);
    printf("\nEnter Student 2 Roll no:");
    scanf("%d",&s2.rollno);
    printf("\nEnter the Name:");
    scanf("%s",s2.name);
    printf("\nRoll no\t\tName");
    printf("\n%d\t\t",s1.rollno);
    printf("%s",s1.name);
    printf("\n%d\t\t ",s2.rollno);
    printf("%s",s2.name);
}