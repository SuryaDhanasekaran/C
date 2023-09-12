#include <stdio.h>
#include<curses.h>
int Fact(int);
int main() {
  int n, r;
  float result;
  printf("\n Enter the value of n: ");
  scanf("%d", &n);
  printf("\n Enter the value of r: ");
  scanf("%d", &r);
  result = (float)Fact(n)/Fact(r);
  printf("\n P(n/r) : P(%d)/P(%d) = %.2f",n,r,result);


  return 0;
}
int Fact(int num)
{
  int f=1, i;
  for(i=num;i>=1;i--)
    f = f*i;
  return f;
}