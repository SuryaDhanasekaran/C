#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int binarysearch(int a[],int key,int low,int high){
    if(low<=high){
	int mid;
	mid=floor((low+high)/2);
	if(a[mid]==key){
		return a[mid];
	}
	else if(a[mid]<key){
		return binarysearch(a,key,mid+1,high);
	}
	else{
		return binarysearch(a,key,low,mid-1);
	}
    }
	return 0;
}
int main(){
	int n,key;
	int value;
	int low,high;
	printf("enter number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	low=0;
	high=n-1;
	printf("enter the key\n");
	scanf("%d",&key);
	value=binarysearch(a,key,low,high);
	if(value==key){
		printf("\n the key is found");
	}
	else {
		printf(" the key is not found");
	}
	return 0;
}
