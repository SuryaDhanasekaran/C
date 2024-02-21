#include<stdio.h>
void main()
{
    int arr[30],size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements:(1 - %d)\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }   
    printf("\nThe Maximum element in the array is: %d",max);
}