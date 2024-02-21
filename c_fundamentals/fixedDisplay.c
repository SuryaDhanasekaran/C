#include<stdio.h>
int main()
{
    int a,b,c;

    float d;

    a = 10;
    b = 150;
    c = 6;

    d = a * b * c + 0.123;
    
    printf("a=%03d b =%-3d c=%-3d",a,b,c);

    printf("\nd=%f",d);
    printf("\nd=%.2f",d);
    printf("\nd=%10.2f",d);

    printf("\nS.No \t Name \t Marks");
}