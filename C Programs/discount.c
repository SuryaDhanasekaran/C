#include<stdio.h>

float discount(float price,int percentage);
int main(void)
{
  float regular,percent_off,sale;

  printf("Enter the Regular Price : ");
  scanf("%f",&regular);
  printf("Enter the Percent Off : ");
  scanf("%f",&percent_off);
  sale = discount(regular,percent_off);
  printf("Sale Price : %.2f\n",sale);
}

float discount(float price,int percentage)
{
  return price * (100 - percentage) / 100;
}