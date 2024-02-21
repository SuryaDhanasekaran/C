// enum -> collection of named integer constant

#include<stdio.h>
void main()
{
    enum days{sun = 10,mon,tue,wed,thu,fri,sat};
    enum days d;
    d = wed;//13
    printf("%d",d);
}