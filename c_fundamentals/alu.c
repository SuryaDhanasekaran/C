
#include <math.h>
#include <stdio.h>
int main()
{
  int a, x, y;
  float res;

  a = 2;
  x = 3;
  y = 2;

  res = pow(a, x + y) + 3.5;

  printf("res = %f", res);
}
