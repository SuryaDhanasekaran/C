#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev,*next;
};
struct node *newnode,*head,*temp;
void create()
{
	newnode = (struct node*) malloc(sizeof(struct node));
	int data;
	printf("Enter the data: ");
	scanf("%d",&newnode->data);
	newnode->next = 0;
	newnode->prev = 0;
	
	if(head == 0)
	{
		head = temp = newnode;
	}
	else
	{
		temp->next = newnode;
		newnode->prev = temp;
		temp = newnode;
	}
}

	
void display()
{
	temp=head;
	while(temp!=0)
	{
	printf("%d ",temp->data);
	temp=temp->next;
	}
}

int getLength()
{
    temp=head;
    int count=0;
    while(temp!=0)
    {
        count++;
        temp=temp->next;
       
    }
    return count;
}

void insertAtBegin()
{
    newnode=(struct node*) malloc(sizeof(struct node));
    int data;
    printf("enter the data BEGIN : ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    if(head==0)
    {
        head=temp=newnode;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head = newnode;
    }
}

void insertAtEnd()
{
	newnode=(struct node*) malloc(sizeof(struct node));
    int data;
    printf("enter the data END : ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev = temp;
    temp = newnode;
	
}

void insertAtPosition()
{
	newnode=(struct node*) malloc(sizeof(struct node));
    int data;
    printf("enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    int i=1,position;
    printf("enter the position: ");
    scanf("%d",&position);
    if(position>getLength())
    {
        printf("invalid position");
    }
    else
	{
        temp=head;
        while(i<position-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev = newnode;
    }
}

void deleteAtBegin()
{
	temp=head;
	head=head->next;
	head->prev=0;
	free(temp);
}

void deleteAtEnd()
{
	temp=head;
	while(temp!=0)
	{
		temp=temp->next;
	}
	temp->prev->next = 0;
	temp->prev = 0;
	free(temp);
	
}

void deleteAtPosition()
{
	temp = head;
	int i=1,position;
	printf("enter the position");
	scanf("%d",&position);
	while(i<position)
	{
		temp=temp->next;
		i++;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
	
}
void main()
{
	create();
	create();
	display();
	insertAtBegin();
	display();
	insertAtEnd();
	display();
	insertAtPosition();
	display();
	deleteAtBegin();
	display();
	deleteAtEnd();
	display();
	printf(" Len : %d",getLength());
}