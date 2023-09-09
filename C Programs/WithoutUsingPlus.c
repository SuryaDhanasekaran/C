//Write a program for addition of 2 numbers without using + operator

#include<stdio.h>

int add(int a,int b)
{
    for(int i = 1; i <= b; i++)
    {
        a++;
    }
    return a;
}
int main()
{
    int a = add(10, 32);
    printf("%d",a);
    return 0;
}
/*
a = 10 b = 32
L1 : i = 1 ; 1 <= 32 ; i = 2
    a = 11
L2 : i = 2 ; 2 <= 32 ; i = 3
    a = 12
.
.
.
.
.i = 32 ; 32 <= 32 ; i = 32
    a = 10 + 32 = 42
*/