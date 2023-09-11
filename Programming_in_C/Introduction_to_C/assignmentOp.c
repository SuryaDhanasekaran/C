#include<stdio.h>

int main() {
  int num1 = 3, num2 = 5;
  printf("\n Initial value of num1 = %d and num2 = %d",num1,num2);
  num1 += num2 * 4 - 7;
  printf("\n After the evaluation of the expression of the expression num1 = %d and num2 = %d", num1, num2);
  return 0;
}