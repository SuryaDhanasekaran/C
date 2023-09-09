#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
struct node *newnode,*head,*temp,*tail;

void create()
{
	newnode = (struct node*) malloc(sizeof(struct node));
	int data;
	printf("Enter the data: ");
	scanf("%d",&newnode->data);
	newnode->next = 0;
	if(tail==0)
	{
		tail=newnode;
		tail->next=newnode;
	}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
		tail=newnode;
	}
}
void display()
{
	temp = tail->next;
	while(temp->next!=tail->next)
	{
		printf("%d",temp->data);
		temp = temp->next;
	}
}

void insertAtBegin()
{
	newnode->next = tail->next;
	tail->next = newnode;
}

void insertAtEnd()
{
	newnode->next = tail->next;
	tail->next = newnode;
	tail=newnode;
	
}
void deleteAtBegin()
{
	temp = tail->next;
	if(temp->next == tail)
	{
		free(tail);
	}
	else
	{
		tail->next = temp->next;
		free(temp);
	}
	
}

void main()
{
	create();
	display();
	
}