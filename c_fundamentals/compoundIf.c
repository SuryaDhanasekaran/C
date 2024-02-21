
#include<stdio.h>
int main()
{
    float salary;
    char grade;

    printf("\nEnter Grade: ");
    grade = getchar();

    printf("\nEnter Salary: ");
    scanf("%f",&salary);

    if(grade == 'A'||grade == 'B'||grade == 'C')
    {
        salary = salary * 1.25;
    }
    else
    {
        salary *= 1.15;
    }
    printf("\nYour Salary=%.2f",salary);

}