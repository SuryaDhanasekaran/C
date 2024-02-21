#include<stdio.h>
void main()
{
    //Array and Pointers

    int arr[5] = {2,4,6,8,10};
    int *p,i;

    p = &arr[0];
    for(i=0;i<5;i++)
    {
        printf("%d ",*(p+i)+10);
    }
}