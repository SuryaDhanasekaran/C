#include<stdio.h>
int main()
{
    float r;

    do
    {

        printf("\nEnter Radius:(100 to Quit) ?");
        scanf("%f",&r);

        if(r<1)
        {
            printf("\nInvalid input!");
            continue;
        }
        if(r==100)
        {
            break;
        }
        printf("\nArea = %f",3.14*r*r);

    }while(r>=1 || r<=99);
}