#include <stdio.h>
#include<curses.h>
int main() {

  int a=27, b=39;
  printf("\n a & b = %d", a&b);
  printf("\n a | b = %d", a|b);
  printf("\n ~a = %d", ~a);
  printf("\n ~b = %d", ~b);
  printf("\n a^b = %d", a^b);
  printf("\n a << 1 = %d", a<<1);
  printf("\n b >> 1 = %d", a>>1);

  return 0;
}