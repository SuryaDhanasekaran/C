#include<stdio.h>
int queue[5];
int front = -1 , rear = -1;
void enqueue()
{
	int data;
	printf('Enter the data');
	scanf("%d",&data);
	if(rear == 5-1)
	{
		printf("Over flow");
	}
	else if(front==-1&&rear==-1)
	{
		front++;
		rear++;
		queue[rear] = data;
	}
	else
	{
		rear++;
		queue[rear] = data;
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("queue is empty");
	}
	else
	{
		front++;
	}
}
void peek()
{
	if(front==-1)
	{
		printf("queue is empty");
	}
	else
	{
		printf("%d",queue[front]);
	}
}
void display()
{
	for(int i=front;i<=rear;i++)
	{
		printf("%d",queue[i]);
	}
}

int main()
{
	int choice;
	do
	{
		
		printf("Enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			enqueue();
			break;
			
			case 2:
				dequeue();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			default:
				printf("Invalid choice");
		}
	}while(choice != 0);
	return 0;
	
}