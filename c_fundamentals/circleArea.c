#include<stdio.h>
int main()
{

    float radius;
    float area;

    printf("\nEnter the Radius:");
    scanf("%f",&radius);
    
    area = 3.14 * radius * radius;

    printf("\nArea = %4f",area);

}

