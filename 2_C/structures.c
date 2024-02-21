// Structures is used to store different datatypes in c

//global structure -> structured declared for all functions
// in common
//local structure -> structured declared for only one function
// in local

#include<stdio.h>

int main()
{
    struct student
    {
        int num;
        char name[20];
        float avg;
    };
    
    struct student s = {1205, "Arun", 70.8};
    
    printf("Student Roll no is %d\n", s.num);
    printf("Student Name is %s\n", s.name);
    printf("Student Average is %g\n", s.avg);
    
    return 0;
}
