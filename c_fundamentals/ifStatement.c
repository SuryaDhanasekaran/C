#include<stdio.h>
int main()
{
    float salary;

    float da = 0;

    printf("\nEnter Salary: ");
    scanf("%f",&salary);

    if(salary < 2500)
       da = salary * 0.5;

    printf("\nYour Salary=%.2f",salary+da);
}