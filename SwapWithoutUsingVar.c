//Write a program to Swap a 2 numbers without using 3rd variable.

#include<stdio.h>
int main()
{
    int x = 10 , y = 5;

    x = x + y;//x = 10 + 5 = 15
    y = x - y;//y = 15 - 5 = 10--->y
    x = x - y;// x = 15 - 10 = 5 -->x
    
    printf("After Swapping: x = %d, y = %d",x,y);
    return 0;

}