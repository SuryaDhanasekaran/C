/*
Typedef - used for creating duplicate name for datatype

*/
#include<stdio.h>
void main()
{
    // typedef int i;

    // i a = 10;

    // typedef unsigned long ul; //unsigned long 

    //typedef in arrays

    // typedef int arr[5];

    // arr num = {2,4,6,8,10};

    // printf("%d",num[2]);

    //typedef pointers

    // typedef int *p;
    // p a,b;

    // int a1;
    // a = &a1;
    // printf("%u",a);

    typedef struct stu
    {
        int a;
        char b;
    }s;

    s a1;
    a1.a = 10;
    a1.b = 'a';
    printf("%d",a1.a);
    printf("%c",a1.b);

}