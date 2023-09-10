#include <stdio.h>

int main() {
  int num;
  float fnum;
  char ch;
  char str[10];
  double dnum;
  short snum;
  long int lnum;

  printf("\n Enter the values : ");
  scanf("%d %f %c %s %le %hd %ld", &num, &fnum, &ch, str, &dnum, &snum, &lnum);

  printf("\n num = %d \n fnum = %.2f \n ch = %c \n str = %s \n dnum = %e \n snum = %hd \n lnum = %ld",num,fnum,ch,str,dnum,snum,lnum);

  return 0;
}