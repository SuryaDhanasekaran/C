#include <stdio.h>

int main() {
  int num;
  float amt;
  char code;
  double pi;
  long int population_of_india;
  char msg[10];

  printf("\n Enter the value of num : ");
  scanf("%d",&num);
  printf("\n Enter the value of amt : ");
  scanf("%f",&amt);
  printf("\n Enter the value of pi : ");
  scanf("%e",&pi);
  printf("Enter the population of India : ");
  scanf("%ld",&population_of_india);
  printf("\n Enter the value of code : ");
  scanf("%c",&code);
  printf("Enter the message : ");
  scanf("%s",&msg);

  printf("\n NUM = %d \n AMT = %f \n PI = %e \n POPULATION OF INDIA = %ld \n CODE = %c \n MESSAGE = %s", num, amt, pi,population_of_india,code, msg);
  return 0;
}