#include <stdio.h>
#include<curses.h>
int check_relation(int a,int b);

int main() {
  int a=3, b=5, res;
  res = check_relation(a,b);
  if(res==0)//Test the returned value
    printf("\n EQUAL");
  if(res==1)
    printf("\n a is greater than b");
  if(res==-1)
    printf("\n a is less than b");
  return 0;
}
int check_relation(int a,int b)
{
  if(a==b)
    return 0;
  else if(a>b)
    return 1;
  else
    return -1;

}