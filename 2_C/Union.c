//Take the size of the big datatype for storage
#include<stdio.h>

int main() {
    union un {
        int a;
        char b;
        float c;
    };
    
    union un o;

    printf("Size of the structure: %d bytes\n", sizeof(o));

    o.a = 10;//value corrupted
    o.b = 'a';//value corrupted
    o.c = 20.5;//only printed last stored value
    
    printf("a: %d\n", o.a);
    printf("b: %c\n", o.b);
    printf("c: %f\n", o.c);

    return 0;
}