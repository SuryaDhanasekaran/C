//Write a program with the example of unary operator.

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a,b,c;
    a = 10;
    b = -a ;// b = -10
    b = ++a;//11
    b = a++;//11
    c = a;//12
    b = --a;//11
    b = a--;//11
    c = a;//10
    bool d = true;
    bool e = !d;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",&a);
    printf("%d\n",e);
    printf(sizeof(d));
}