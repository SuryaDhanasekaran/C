int main()
{
    long product=1;

    int i;

    printf("\nN Value Value");
    for(i=1;i<=15;i+=2)
    {
        product = product * i;

        printf("\n%-7d %ld",i,product);
    }
    printf("\nFinal Result = %ld",product);
}