/*
Used to print minimum and maximum size of datatype
*/

#include<stdio.h>
#include<limits.h>

void main()
{
    printf("Minimum size of int is %d\n",INT_MIN);
    printf("Maximum size of int is %d\n",INT_MAX);
    printf("Minimum size of char is %d\n",CHAR_MIN);
    printf("Maximum size of char is %d\n",CHAR_MAX);
    printf("Minimum size of long is %ld\n",LONG_MIN);
    printf("Maximum size of long is %ld\n",LONG_MAX);

    //unsigned
    printf("Minimum size of unsigned int is %u\n",UINT_MAX);
    printf("Minimum size of unsigned char is %u\n",UCHAR_MAX);
    printf("Minimum size of unsigned long is %llu\n",ULONG_MAX);
}