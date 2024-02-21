#include<stdio.h>

void c_value(int *x)
{
    *x = *x + 10;
    printf("value of x is %d\n",*x);
}
void main()
{
    //call by value
    int a = 5;
    c_value(&a);//calling function
    printf("value of a is %d\n",a);
}