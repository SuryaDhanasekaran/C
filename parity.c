#include<stdio.h>

int main(void)
{
  int n;
  printf("Enter the value of n : ");
  scanf("%i",&n);

  if(n%2==0)
  {
    printf("Even\n");
  }
  else
  {
    printf("Odd\n");
  }
}