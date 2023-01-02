/**
 *The distance between two cities(in km.)is input through the keyboard. Write a program 
 to convert and print this distance in meters,feet,inches and centimeters. 
 */
#include<stdio.h>
int main(){
    float km,m,cm,ft,i;
    printf("Enter the Kilometer : ");
    scanf("%f",&km);
    m = km*1000;//Conversion formulas
    cm = m*100;
    i = cm/2.54;
    ft = i/12;
    printf("\n Km : %0.2f",km);
    printf("\n M : %0.2f",m);
    printf("\n CM : %0.2f",cm);
    printf("\n FT : %0.2f",ft);
    printf("\n IN : %0.2f",i);
    return 0;
}
