//Reverse a String using Stack

/*create an empty stack
*one by one push all characters of string to stack
*one by one pop all characters from stack and put them back to string.*/

#include<stdio.h>
#include<string.h>

#define size 100
int top = -1;
char stack[size];

char push(char ch)
{
  //Push -Inserting Element in stack operation

  if(top == size-1){
    printf("stack overflow\n");
  }
  else
  {
    stack[++top] = ch;
  }
}
char pop()
{
  if(top == -1)
    printf("Stack is Underflow\n");
  else
    return stack[top--];
  //Pop - Removing element from stack
}

int main()
{
  int i;
  char str[20];
  printf("Enter a String: \n");
  gets(str);
  
  for(i=0;i<strlen(str);i++)
  {
    push(str[i]);
  }

  for(i=0;i<strlen(str);i++)
    push(str[i]);
  
  for(i=0;i<strlen(str);i++)
  {
    str[i] = pop();
  }
  printf("Reversed string is :");
  puts(str);
  
}