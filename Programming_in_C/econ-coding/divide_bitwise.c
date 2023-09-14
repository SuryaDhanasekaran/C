#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,temp=1,result=0,a,b;
    //Variable declaration and initialization
    printf("Enter two numbers \n");
    //Ask input from the user
    scanf("%d %d",&num1,&num2);
    //Reading the input from the user

    while(num2<=num1) {//Using while loop
num2<<=1;
temp<<=1;

}
while(temp>1)
{
    num2>>=1;
temp>>=1;
if(num1>=num2)
{
    num1-=num2;
     result+=temp;
}
}
printf("Division of given two numbers is: %d",result);
    return 0;
}