#include<stdio.h>

int add(int,int);
void main()
{
    int (*p)(int,int);

    p = &add;
    printf("%d",p(10,20));

}
int add(int x,int y)
{
    int z = x+y;
    return z;
}