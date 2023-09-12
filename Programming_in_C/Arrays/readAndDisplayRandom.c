#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
#define MAX 10
int main()
{
  int arr[MAX], i, RandNo;
  for(i=0;i< MAX;i++)
  {
    /*Scale the random number in the range of 0 to MAX-1*/
    RandNo = rand() % MAX;
    //rand() is a predefined function
    arr[i] = RandNo;
  }
  printf("\n The contents of the array are:\n");
  for(i=0;i<MAX;i++)
    printf("\t %d", arr[i]);
  return 0;
}