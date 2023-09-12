#include <stdio.h>
#include<curses.h>
int Fact(int);
int main() {
  int n, f, i;
  float result=0.0;
  printf("\n Enter the value of n: ");
  scanf("%d", &n);
  for(i=1;i<=n;i++)
  {
    f=Fact(i);
    result += 1/(float)f;
  }
  printf("\n The sum of the series 1/1! + 1/2! + 1/3!... = %.1f",result);


  return 0;
}
int Fact(int num)
{
  int f=1, i;
  for(i=num;i>=1;i--)
    f = f*i;
  return f;
}