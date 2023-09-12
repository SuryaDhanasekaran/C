#include<stdio.h>
#include<curses.h>
int main()
{
  int i=0, n, arr[20];
  printf("\n Enter the number of elements:");
  scanf("%d",&n);
  printf("\n Enter the elements");
  for(i=0;i<n;i++)
  {
     printf("\n Arr[%d] = ",i);
     scanf("%d",&arr[i]);
  }
  printf("\n The array elements are\n");
  for(i=0;i<n;i++)
    printf("Arrr[%d] = %d\t",i,arr[i]);
  return 0;
  
}