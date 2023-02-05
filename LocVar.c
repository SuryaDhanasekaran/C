#include<stdio.h>
void main()
{
    function1();
    function1();
}
void function1()
{
    int x = 10;//loc var
    static int y = 10; //stat var
    x = x + 1;
    y = y + 1;
    printf("%d\n%d\n",x,y);
}