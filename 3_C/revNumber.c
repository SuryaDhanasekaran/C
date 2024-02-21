#include<stdio.h>
int main()
{
    int n,rem,rev=0,originalN;
    printf("Enter the number: ");//12345
    scanf("%d",&n);
    originalN = n;
    while(n>0)
    {
        rem = n%10;//5
        rev = rev*10+rem;//rev = 0*10+5 = 5
        n = n/10;//1234
    }
    printf("The reverse number is: %d",rev);
    if(originalN==rev)
    {
        printf("\nIt is a palindrome number");
    }
    else
    {
        printf("\nIt is not a palindrome number");
    }
}