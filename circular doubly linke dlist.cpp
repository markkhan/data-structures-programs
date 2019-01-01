//profram to implement circular doubly linked list//
#include<stdio.h>
#include<stdlib.h>
void insertfirst();
void insertlast();
void deletefirst();
void deletelast();
void search();
void display();
struct node
{
	struct node *prev;
	int info;
	struct node *next;
};
typedef struct node node;
node *new1,*start,*last,*ptr;
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.insertfirst\n2.insertlast\n3.deltefirst\n4.deletelast\n5.serach\n6.display\n0.exit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertfirst();
				display();
				break;
			case 2:
			    insertlast();
				display();
		 		break;
			case 3:
			    deletefirst();
				display();
				break;
			case 4:
			    deletelast();
				display();
				break;	
			case 5:
			    search();
				display();
				break;
			case 6:
			    display();
				break;
			case 0: exit(0);
			default: printf("you ennterd wrong choice");
		}
	}
}
void createemptylist()
{
	start=NULL;
	last=NULL;
}
void insertfirst()
{
	int item;
	new1=(node*)malloc(sizeof(node));
	printf("enter the elemnt to insert:");
	scanf("%d",&item);
	new1->info=item;
	new1->prev=last;
	if(start==NULL)
	{
		ptr=start;
		start=new1;
		last=new1;
		new1->next=start;
	}
	else
	{
		new1->next=start;
		last->next=new1;
		start=new1;
	}
}
void insertlast()
{
	int item;
	new1=(node*)malloc(sizeof(node));
	printf("enter the elemnt to insert:");
	scanf("%d",&item);
	new1->info=item;
	new1->next=start;
	if(last==NULL)
	{
		last=new1;
		start=new1;
		new1->prev=last;
	}
	else
	{
		last->next=new1;
		new1->prev=last;
		start->prev=new1;
		last=new1;
	}
}
void deletefirst()
{
	if(start==NULL)
	{
		printf("underflow");
		return;
	}
	if(start==last)
	{
		ptr=start;
		start=NULL;
		last=NULL;
	}
	else
	{
		ptr=start;
		ptr=ptr->next;
		last->next=ptr;
		ptr->prev=last;
		start=ptr;
	}
	printf("deleted item is %d",ptr->info);
	free(ptr);
}
void deletelast()
{
	node *ptr1;
	if(start==NULL)
	{
		printf("underflow");
		return;
	}
	if(start==last)
	{
		ptr=start;
		start=NULL;
		last=NULL;
	}
	else
	{
		ptr=start;
		while(ptr->next!=start)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		ptr1->next=start;
		start->prev=ptr1;
		last=ptr1;
	}
	printf("deleted item is %d",ptr->info);
	free(ptr);
}
void display()
{
	printf("linked list in forward direction :");
	ptr=start;
	while(ptr->next!=start)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->next;
	}
	printf("linked list in backward direction:");
	ptr=last;
	while(ptr->prev!=last)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->prev;
	}
}
void search()
{
	int item,i;
	node *loc=NULL;
	printf("enter the element to search:");
	scanf("%d",&item);
	ptr=start;
	while(ptr->next!=start)
	{
		if(ptr->info=item)
		{
			loc=ptr;
			break;
		}
		ptr=ptr->next;
	}
	if(loc==NULL)
	{
		printf("item not found");
		return;
	}
	else
	{
		printf("item is found at %u",loc);
	}
}
