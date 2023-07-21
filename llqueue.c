#include<stdio.h>

struct node
{
	int data;
	struct node *next;
};
struct node *front,*rear;
void enqueue()
{
	newnode = (struct node*) malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&newnode->data);
	newnod->next = 0;
	if(front==0 && rear==0) 
	{
		front = rear = newnode;
	}
	else
	{
		rear->next = newnode;
		rear = newnode;
	}
}
void dequeue()
{
	temp = front;
	front = front->next;
	free(temp);
}