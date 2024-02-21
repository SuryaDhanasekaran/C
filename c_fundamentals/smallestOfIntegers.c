#include<stdio.h>

int main()
{
    int n;
    int smallest,tmp;
    int i;

    printf("\nEnter the numbers in a single line.");
    printf("\nFist number should indicate the count of numbers\n\n");

    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        scanf("%d",&tmp);

        if(i==1 || smallest>tmp)
        {
            smallest = tmp;
        }
    }
    printf("\nSmallest = %d",smallest);
}