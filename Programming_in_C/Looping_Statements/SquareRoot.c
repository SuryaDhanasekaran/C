#include <stdio.h>
#include<math.h>

int main() {
  int num;
  do
  {
    printf("\n Enter any number. Enter 999 to stop: ");
    scanf("%d",&num);
    if(num == 999)
    break; //quit the loop
    if(num < 0)
    {
      printf("\n Square toot of negative numbers are not defined");
      continue; //skip the following statements
    }
    printf("\n The square root of %d is %f",num,sqrt(num));
  } while (1);
  
  return 0;
}