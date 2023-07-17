#include<stdio.h>
int main(){
	int a = 10;
	int b = 20;
	int *p = &a;
	int *q = &b;
	
	int temp = *p;
	*p = *q;
	*q = temp;
	printf("%d\n",*p);
	printf("%d\n",*q);
	return 0;
}