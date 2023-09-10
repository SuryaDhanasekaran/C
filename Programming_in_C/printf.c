#include <stdio.h>

int main() {
  printf("Welcome to the world of C ");

  printf("\n Result : %d %c %f", 12, 'a', 2.3);

  printf("\n Result: %d\t%c\t%f", 12, 'a', 2.3);

  printf("\n Result: %d\t%c\t%6.2f", 12, 'a', 245.37154);

  printf("\n Result: %5d \t %x \t %#x", 234, 234, 234);

  printf("\n The number is %6d",12);

  printf("\n The number is %2d",1234);

  printf("\n The number is %6d",1234);

  printf("\n The number is %-6d",1234);

  printf("\n The number is %06d",1234);
  return 0;
}