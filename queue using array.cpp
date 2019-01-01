//program to implement queue using array//
#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
void insertq();
void deleteq();
void displayq();
int queue[maxsize],front=-1,rear=-1;
int main()
{
	int choice;
	while(1)
	{
		printf("\n\n ***queue menu*** \n");
		printf("\n 1. insertion \n 2. deletion \n 3. diplay \n 0.exit\n");
		printf("enter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : insertq();
			         displayq();
			         break;
			         
			case 2 : deleteq();
			         displayq();
					 break;
					 
			case 3 : displayq();
			         break;
			
			case 0 : exit (0);
			
			default : printf("\n you entered wrong choice \n");		 		         
		}
	}
}
void insertq()
{
	int item;
	if(rear==maxsize-1)
	{
		printf("\n overflow condition \n");
		return;
	}
	else
	{
		printf("\n enter the element to insert : \n");
		scanf("%d",&item);
		
		if(rear==-1)
		{
			rear=0,front=0;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=item;
	}
}
void deleteq()
{
	int item;
	if(rear==-1)
	{
		printf("\n underflow condition \n");
		return;
	}
	else
	{
		item=queue[front];
		if(front==rear)
		{
			front=-1,rear=-1;
		}
		else 
		{
			front= front+1;
		}
		printf("deleted element is %d",item);
	}
}
void displayq()
{
	int i;
	if(front==-1)
	{
		printf("\n queue is empty \n");
	}
	else
	{
	printf("\n queue is :\t");
	for(i=front;i<=rear;i++)
	 {
		printf("\t%d\t",queue[i]);
	 }
	}
}
