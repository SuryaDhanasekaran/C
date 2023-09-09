#include<stdio.h>
int main()
{
    float a = 234e2; //adding 0 in front -->Octal Value, 0x-Hexadecimal,int 25.5-whole(25)
    printf("%f",a);//char %d - ASCII value
    return 0;
    /**
     * Scientific Notations - 234e2 - e2 value 100 ---> 234 x 100
     * 234e-2 ---> 234/100 -->2.34
     * 0.2f-two decimal values
     * 
     */
}