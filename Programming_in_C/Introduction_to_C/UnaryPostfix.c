#include <stdio.h>

int main() {
  int num = 3;

  //Using unary postfix increment operator

  printf("\n The value of num = %d",num);
  printf("\n The value of num++ = %d",num++);
  printf("\n The new value of num = %d",num);
  //Using unary postfix decrement operator
  printf("\n\nThe value of num = %d",num);
  printf("\n The value of num-- = %d",num--);
  printf("\n The new value of num = %d",num);
  return 0;
}