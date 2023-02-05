#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    printf("Integer value of %c = %d",c,c);
    return c;
}