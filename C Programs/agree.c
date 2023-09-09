#include<stdio.h>

int main(void)
{
  char c;

  printf("Enter your choice : ");
  scanf("%c",&c);

  if( c=='y' || c=='Y')
  {
    printf("User agreed.\n");
  }
  else if(c=='n' || c=='N')
  {
    printf("User Not Agreed.\n");
  }



}