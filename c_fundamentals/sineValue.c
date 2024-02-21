#include<stdio.h>
#include<math.h>
int main()
{
    float sineValue = 0;
    int mf = 1;
    int i,j;

    long fact = 1;

    float x;
    int n;

    printf("\nEnter the value of x & Number of terms n:");
    scanf("%f %d",&x,&n);

    for(i=1,j=1;j<=n;i+=1,j++)
    {
        sineValue = sineValue + (mf * pow(x,i)) / fact;
        mf = -mf;
        fact = fact * (i+1) * (i+2);
    }
    printf("\nSine Value = %f",sineValue);

}