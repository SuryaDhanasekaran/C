#include <stdio.h>
#include<curses.h>
int main() {
  int num1, num2, num3,large,small;

  printf("\n Enter the first number: ");
  scanf("%d",&num1);
  printf("\n Enter the second number: ");
  scanf("%d",&num2);
  printf("\nEnter the third number: ");
  scanf("%d",&num3);

  large = num1>num2 ? (num1>num3?num1:num3) : (num2>num3?num2:num3);
  small = num1<num2 ? (num1<num3?num1:num3) : (num2<num3?num2:num3);
  printf("\n The largest number is: %d",large);
  printf("\n The smallest number is: %d",small);

  return 0;
}