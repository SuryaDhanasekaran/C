#include<stdio.h>
int main()
{
    int a = 11;
    int b = 11;

    if(a>0 && b>0)
    {
        printf("Both values are greater than zero\n");
    }
    else if(a > 0 || b > 0)
    {
        printf("Any one of the given values is greater than zero\n");
    }
    else if(!(a < 0 && b > 0))
    {
        printf("Both values are less than zero");
    }
    int c = 11;
    int d = 11;
    
    if(c == d)
    {
        printf("%d\n",a^b);
    }

}