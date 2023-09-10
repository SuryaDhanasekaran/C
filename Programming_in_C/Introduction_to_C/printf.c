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

  printf("\n The price of this item is %09.2f rupees",123.456);

  printf("\n This is \'so\' beautiful");

  printf("\n This is \"so\" beautiful");

  printf("\n This is \\ so beautiful");

  //printf("\n a = |%-+7.2f| b = %0+7.2f c = %-0+8.2f",1.2,1.2,1.2);

  printf("\n %7.4f \n %7.2f \n %-7.2f \n %f \n %10.2e \n %11.4e \n %-10.2e \n %e",98.7654,98.7654,98.7654,98.7654,98.7654,98.7654,98.7654);

  char ch = 'A';

  printf("\n %c \n %3c \n %5c", ch, ch, ch);

  char str[] = "Good Morning";

  printf("\n %s",str);
  printf("\n %20s",str);
  printf("\n %20.10s",str);
  printf("\n %.7s",str);
  printf("\n %-20.10s",str);
  printf("\n %7s",str);





  return 0;
}