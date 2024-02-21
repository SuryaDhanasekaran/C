/*
Pointers is a variable that contains the address of the 
another variable.
It points to the location of a variable and can indirectly access the variable
Pointers are declared using the * operator
int *p;
*/
#include<stdio.h>
void main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("%u",p);
    printf("\n%d",a);
    printf("\n%d",*p);
    printf("\n%d",++*p);
    printf("\n%d",a);
}