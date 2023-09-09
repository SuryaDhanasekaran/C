//Write a program to print the size of datatypes 

#include<stdio.h>
int main()
{
    int intType;
    short int shortType;
    long int longType;
    float floatType;
    double doubleType;
    long double longDoubleType;
    char charType;

    //sizeof()-size of variable
    printf("Size of int: %zu bytes\n",sizeof(intType));
    printf("Size of short int: %zu bytes\n",sizeof(shortType));
    printf("Size of long int: %zu bytes\n",sizeof(longType));
    printf("Size of float: %zu bytes\n",sizeof(floatType));
    printf("Size of double: %zu bytes\n",sizeof(doubleType));
    printf("Size of long double: %zu bytes\n",sizeof(longDoubleType));
    printf("Size of char: %zu bytes\n",sizeof(charType));
}