#include<stdio.h>
int main()
{
    char color;

    printf("\nEnter the color character (R/G/B):");
    color = getchar();

    switch (color)
    {
        case 'r':
        case 'R':
            printf("\nRED");
            break;
        case 'g':
        case 'G':
            printf("\nGREEN");
            break;
        case 'b':
        case 'B':
            printf("\nBLUE");
            break;
    default:
        printf("\nBLACK");
        break;
    }
}