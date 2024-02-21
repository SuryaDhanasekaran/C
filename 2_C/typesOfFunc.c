/*
No Arguments and No Return Values
With Arguments with No Return Values
With Arguments with Return Values
No Arguments with Return Values
*/

#include<stdio.h>
// #include<conio.h>

// void cel();
// void cel(int,int);
// int cel(char);
float cel();
void main()
{
    // clrscr();
    // cel();
    // cel(4,5);
    // printf("%d",cel('a'));
    printf("%.2f",cel());
    // getch();
}

// void cel()
// {
//     int a,b,c;
//     printf("Enter Two Numbers for addition:");
//     scanf("%d%d",&a,&b);

//     c = a+b;
//     printf("Sum of %d and %d is %d",a,b,c);
// }
// void cel(int a,int b)
// {
//     int c = a - b;
//     printf("Difference of %d and %d is %d",a,b,c);
// }

// int cel(char a)
// {
//     return a;
// }

float cel()
{
    float a,b,c;
    printf("Enter Two Numbers for addition:");
    scanf("%f%f",&a,&b);
    c = a/b;
    return c;
}