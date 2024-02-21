#include<stdio.h>
void fun();
void main()
{
    //Recursion: A function which call itself is called

    fun();
}
void fun()
{
    printf("Hello\n");
    fun();//recursion
}