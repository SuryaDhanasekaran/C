//uses break statement
#include <stdio.h>

int main() {
  int num,sum=0;
  while (1)
  {
    printf("\n Enter any number. Enter 999 to stop: ");
    scanf("%d",&num);
    if(num==999)
    break; //quit the looop
    sum+=num;
  }
  printf("\n SUM = %d", sum);  
  return 0;
}