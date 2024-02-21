#include<stdio.h>

void fun(int n)
{
    if(n<=0)
    {
        printf("End\n");
    }
    else
    {
        printf("%d ",n);
        fun(n-1);
    }
}
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    fun(n);
}