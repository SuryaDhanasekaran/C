#include<stdio.h>

int main()
{
	int arr[] = {1,2,3};
	int dup[] = {0,0,0,0,0,0};
	for(int i=0;i<3;i++)
	{
		dup[i] = arr[i];
		dup[i+3] = arr[i];
	}
	for(int i=0;i<6;i++)
	{
		printf("%d",dup[i]);
	}
	return 0;
}