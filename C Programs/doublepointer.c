#include<stdio.h>
int main(){
	int a = 5;
	int *p = &a;
	int **q = &p;
	printf("%d\n",a);
	printf("%p\n",p);
	printf("%d\n",*p);
	printf("%p\n",q);
	printf("%d\n",*q);
	printf("%d\n",**q);
	return 0;
}