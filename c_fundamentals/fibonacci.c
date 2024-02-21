#include<stdio.h>

int main()
{
    int n;
    unsigned long f1,f2,f3;

    int i;

    printf("\nHow many numbers to be displayed");
    scanf("%d",&n);

    f1 = f2 = 1;

    printf("\n%d %d ",f1,f2);

    for(i=3;i<=n;i++)
    {
        f3 = f1 + f2;
        printf("%lu ",f3);
        f1 = f2;
        f2 = f3;
    }

}