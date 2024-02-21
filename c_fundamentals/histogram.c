#include<stdio.h>
int main()
{
    int n;
    int i,j;
    printf("\nEnter 5 integers:");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&n);

        printf("\n%2d",n);

        for(j=1;j<=n;j++)
        {
            printf("*");
        }
    }
}