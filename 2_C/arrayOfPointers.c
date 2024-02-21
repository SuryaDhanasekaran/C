/*
Array is a collection of similar data

int arr[5];

Array of pointer is a collection of address of same type.

int *arr[5];
*/

#include<stdio.h>
void main()
{
    int arr[5] = {2,4,6,8,10};
    int *p[5],i;

    for(i=0;i<5;i++)
    {
        p[i] = &arr[i];
        printf("\n%d",*p[i]);
    }
}