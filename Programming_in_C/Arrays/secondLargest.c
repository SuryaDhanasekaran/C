#include <stdio.h>
#include<curses.h>
int main() {
  int i, n, arr[20], pos, large, second_large;

  printf("\n Enter the number of elements in the array: ");
  scanf("%d", &n);

  for(i=0;i<n;i++)
  {
    printf("\n Enter the number: ");
    scanf("%d", &arr[i]);
  }
  large=arr[0];
  pos=0;
  for(i=1;i<n;i++)
  {
    if(arr[i]>large)
    {
      large = arr[i];
      pos = i;
    }
  }
    second_large=arr[n-pos-1];
    for(i=0;i<n;i++)
    {
      if(i != pos)
      {
        if(arr[i]>second_large)
          second_large = arr[i];
      }
    }
    printf("\n The numbers you entered are: ");
    for(i=0;i<n;i++)
      printf("%d ",arr[i]);
    printf("\n The largest of these number is: %d",large);
    printf("\n The second largest of these numbers is: %d",second_large);
    return 0;
}