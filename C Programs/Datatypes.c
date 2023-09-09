#include<stdio.h>
#include<limits.h>//size of(),SHRT_MIN,SHRT_MAX
#include<float.h>
int main()
{
    //Integer
    printf("\nShort int %u Bytes %d To %d",sizeof(short int),SHRT_MIN,SHRT_MAX);
    printf("\nunsigned short int %u Bytes 0 To %d",sizeof(unsigned short int),USHRT_MAX);
    printf("\nunsigned int %u Bytes 0 To %u",sizeof(unsigned int),UINT_MAX);
    printf("\nint %u Bytes %d To %d",sizeof(int),INT_MIN,INT_MAX);
    printf("\nlong int %u Bytes %ld To %ld",sizeof(long int),LONG_MIN,LONG_MAX);
    printf("\nunsigned long int %u Bytes 0 To %u",sizeof(unsigned long int),ULONG_MAX);
    printf("\nlong long int %u Bytes %lld To %lld",sizeof(long long int),LLONG_MIN,LLONG_MAX);
    printf("\nunsigned long long int %u Bytes 0 To %llu \n\n",sizeof(unsigned long long int),ULLONG_MAX);

    printf("\nCharacter %u Bytes %d To %d",sizeof(char),CHAR_MIN,CHAR_MAX);
    printf("\nCharacter %u Bytes 0 To %d\n\n",sizeof(unsigned char),UCHAR_MAX);

    printf("\nFloat %u Bytes",sizeof(float));
    printf("\nDouble %u Bytes",sizeof(double));
    printf("\nLong Double %u Bytes\n\n",sizeof(long double));
    return 0;


}

/**
 * 
 * 
 */