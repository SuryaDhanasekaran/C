#include<stdio.h>

void fun();
void main()
{
    fun();
    fun();
    fun();
}
void fun()
{
    static int a = 10;
    a++;
    // printf("%d\n",a); 0 0 0
    printf("%d\n",a);
}