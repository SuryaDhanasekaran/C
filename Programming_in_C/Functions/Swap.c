#include <stdio.h>
void swap_call_by_val(int,int);
void swap_call_by_ref(int *,int *);
int main() {
  int a=1, b=2, c=3, d=4;
  printf("\n In main(), a = %d and b = %d",a, b);
  swap_call_by_val(a, b);
  printf("\n In main(), c = %d and d = %d",c, d);
  swap_call_by_ref(&c, &d);
  //address of the variables is passed
  printf("\n In main(), c = %d and d = %d",c, d);



  return 0;
}
void swap_call_by_val(int a,int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("\n In function (Call by Value method), a = %d and b = %d",a, b);
}
void swap_call_by_ref(int *c,int *d)
{
  int temp;
  temp = *c;
  //*operator used to refer value
  *c = *d;
  *d = temp;
  printf("\n In function (Call by Reference method), c = %d and d = %d",*c, *d);
}