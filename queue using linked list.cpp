//circular queue using linked list//
#include<stdio.h>
#include<stdlib.h>
void insertq();
void deleteq();
void display();
struct node
{
	int info;
	struct node *link;
};
typedef struct node node;
node *front,*new1,*rear,*ptr;
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("0.exit");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertq();
				display();
				break;
			case 2:
			    deleteq();
				display();
				break;
			case 3:
			    display();
				break;
			case 0: exit(0);
			default: printf("you enetred wrong choice");			
		}
	}
}
void createemptyqueue()
{
	front=NULL;
	rear=NULL;
}
void insertq()
{
	int item;
	new1=(node*)malloc(sizeof(node));
	printf("enter the element to insert:");
	scanf("%d",&item);
	new1->info=item;
	if(front==NULL)
	{
		front=rear=new1;
		front->link=rear->link=NULL;
		return;
	}
	else
	{
		rear->link=new1;
		rear=new1;
		rear->link=NULL;
	}
}
void deleteq()
{
	if(front==NULL)
	{
		printf("underflow");
		return;
	}
	else
	{
		ptr=front;
		front=front->link;
		printf("deleted element is %d\n",ptr->info);
		free(ptr);
	}
}
void display()
{
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	else
	{
	printf("queue is :\n");
	ptr=front;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->link;
	}
    }
} 
