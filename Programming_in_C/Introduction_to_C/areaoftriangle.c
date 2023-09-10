#include <stdio.h>
#include<math.h>
#include<curses.h>

int main() {
  float a,b,c,S;
  double area;
  printf("\n Enter the lengths of the three sides of the triangle : ");
  scanf("%f %f %f", &a, &b, &c);

  S = (a + b + c)/2;

  //sqrt is a mathematical function defines in math.h header file

  area = sqrt(S*(S-a)*(S-b)*(S-c));
  printf("\n Area = %lf",&area);

  return 0;
}