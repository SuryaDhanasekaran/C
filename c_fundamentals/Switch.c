#include<stdio.h>
int main()
{
    int opt;

    printf("\nEnter a value (1-3):");
    scanf("%d",&opt);

    switch (opt)
    {
        case 1:
            printf("\nHOT");
            break;
        case 2:
            printf("\nLUKE WARM");
            break;
        case 3:
            printf("\nCOLD");
            break;
        default:
            printf("\nOUT OF RANGE");
    }
}