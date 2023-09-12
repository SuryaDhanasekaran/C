#include<stdio.h>
float calc_area(float r);
int main()
{
  float area,radius;
  printf("\n Enter the radius of the circle: ");
  scanf("%f",&radius);
  area = calc_area(radius);
  printf("\n Area of the circle with radius %.f = %.2f",radius,area);
  return 0;
}
float calc_area(float radius)
{
  return (3.14 * radius * radius);
}