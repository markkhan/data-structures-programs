//implement circular queue//
#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
void insertq();
void deleteq();
void displayq();
int cqueue[maxsize],rear=-1,front=-1;
int main()
{
	int choice;
	while(1)
	{
		printf("\n***circular queue menu****\n");
		printf("\n 1.insertion \n2.deletion \n3.display \n0.exit\n");
		printf("\n enter your choice\n");
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
	if ((front == 0 && rear == maxsize-1) || (front==rear+1)) 
    { 
        printf("\nQueue is Full"); 
        return; 
    } 
  
    else 
    printf("\n enter an item to insert\n");
	scanf("%d",&item);
	if (front == -1) /* Insert First Element */
    { 
        front = rear = 0;  
    } 
    else if (rear == maxsize-1) 
    { 
        rear = 0;
    }
    else
    {
	   rear=rear+1;
    }
	cqueue[rear]=item; 
}
void deleteq()
{
	int item;
	if(front==-1)
	{
		printf("\n underflow condition\n");
	}
	else
	{
		item = cqueue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			if(front==maxsize-1)
			{
				front=0;
			}
			else
			{
				front=front+1;
			}
			printf("\n deleted element is %d\n",item);
		}
	}
}
void displayq()
{
	int i;
	if(front==-1)
	{
		printf("\nqueue is empty\n");
	}
	else
	{
		printf("queue is :");
		if(rear>=front)
		{
			for(i=front;i<=rear;i++)
			{
				printf("%d\t",cqueue[i]);
			}
		}
		else
		{
			for(i=front;i<=maxsize-1;i++)
			{
				printf("%d\t",cqueue[i]);
			}
		
			for(i=0;i<=rear;i++)
			{
				printf("%d\t ",cqueue[i]);
			}
		}
	}
}
