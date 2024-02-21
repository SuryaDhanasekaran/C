int main()
{
    int a;
    float b;
    char c;
    char s[100];

    // printf("\nEnter Value of A:");
    // scanf("%d",&a);

    // printf("\nEnter Value of B:");
    // scanf("%f",&b);
    
    printf("Enter your name:");
    gets(s);

    printf("Enter Sex (M/F):");
    scanf("%c",&c);


    printf("Enter the value of A and B");
    scanf("%d %f",&a,&b);

    printf("\nYour name is %s Your are %c",s,c);
    printf("\nA = %d B = %f",a,b);
}