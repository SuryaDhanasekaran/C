/**
 * Ramesh's basic salary is input throught the keyboard.His dearness allowance is 40%
 * of basic salary,and house rent allowance is 20% of basic salary. Write a program to
 * calculate his gross salary. 
 */
#include<stdio.h>//printf and scanf

int main(){

    float bs,da,hra,gs;
    printf("\n Enter your Basic Salary : ");
    scanf("%f",&bs);
    da = bs * 0.4;
    hra = bs * 0.2;
    gs = bs + da + hra;
    printf("\nBasic Salary : %0.2f",bs);
    printf("\nDA : %0.2f",da);
    printf("\nHRA : %0.2f",hra);
    printf("\nGross Salary : %0.2f",gs);
    return 0;
}

