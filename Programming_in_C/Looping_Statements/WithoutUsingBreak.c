#include <stdio.h>

int main() {
  int num,sum=0,flag=1;
  //flag will be used to exit from the loop
  while (flag==1) //loop control variable
  {
    printf("\n Enter any number. Enter 999 to stop: ");
    scanf("%d",&num);
    if(num!=999)
      sum+=num;
    else
      flag=0; //quit the loop
  }
  printf("\n SUM = %d", num);
  return 0;
  
  return 0;
}