/*
 , -> Comma used as a separator
 & -> Address of the variable
 * -> Pointer to a variable
 sizeof() -> gives the size of the variable
*/
#include<stdio.h>
void main()
{
    int a,*b;
    float c;
    printf("Address of A is %u\n",&a);
    b = &a;
    printf("Address of B is %u\n",&b);
    printf("\nsize of A is %d\n",sizeof(a));
    printf("\nsize of C is %d\n",sizeof(c));
    printf("\nsize of %d",sizeof(char));
    printf("\nsize of %d",sizeof(int));
    printf("\nsize of %d",sizeof(float));
    printf("\nsize of %d",sizeof(double));
    printf("\nsize of %d",sizeof(*b));

}