#include <stdio.h>
#include<math.h>
#include<curses.h>

int main() {

  int x1,x2,y1,y2;
  float distance;

  printf("\n Enter the x and y coordinates of the first point : ");
  scanf("%d %d",&x1,&x2);
  printf("\n Enter the x and y coordinates of the second point : ");
  scanf("%d %d",&y1,&y2);
  
  //sqrt and pow are mathematical functions defined in math.h header ffile 
  distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
  printf("\n Distance = %f",distance);


  return 0;
}