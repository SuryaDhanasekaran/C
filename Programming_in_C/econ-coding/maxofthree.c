#include<stdio.h>
int max(int a, int b, int c)
{
     int m = a;
     (m < b) && (m = b); //these are not conditional statements.
     (m < c) && (m = c); //these are just boolean expressions.
     return m;
}
int main() {
        printf("%d\n", max(1,2,3));
        printf("%d\n", max(2,3,1));
        printf("%d\n", max(3,1,2));
        return 0;
}