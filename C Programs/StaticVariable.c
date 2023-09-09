//Write a program with example of static variable

#include<stdio.h>

int statExample()
{
    static int number = 0;
    number++;
    return number;
}
int main()
{
    printf("%d\n",statExample());
    printf("%d",statExample());
    return 0;
}