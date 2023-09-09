#include<stdio.h>

int main(void)
{
  int points;
  const int MINE = 2;

  printf("Enter your points");
  scanf("%i",&points);

  if(points < MINE)
  {
    printf("Your points are fewer closer to mine.\n");
  }
  else if(points > MINE)
  {
    printf("You points are more than MINE.\n");
  }
  else
  {
    printf("Your points are equal to MINE.\n");
  }
}