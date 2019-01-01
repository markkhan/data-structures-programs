//program to implement doubly linked list//
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
node *start,*last,*ptr,*new1;
int main()
{
	int ch;
	while(1)
	{
		printf("\n\n***main menu****\n\n");
		printf("---------------------");
		printf("\n1.insert at first\n2. insert at location\n3.insert at last\n4.delete at first\n5.delete at location\n6.delete at last\n7.search\n8.dsiplay\n0. exit\n");
		printf("----------------------\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		switch(ch)
		{
			case 1:
				insertfirst();
				display();
				break;
			case 3:
			    insertlast();
				display();
				break;
			case 4:
			    deletefirst();
				display();
				break;
			case 6:
			    deletelast();
				display();
				break;
			case 7 :
			    search();
				display();
				break;
			case 8:
			    display();
				break;
			case 0:printf("galat button mat daba");							
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
	printf("enter the item to insert at first location:");
	scanf("%d",&item);
	new1->info=item;
	if(start==NULL)
	{
		new1->next=start;
		new1->prev=last;
		start=new1;
		last=new1;
	}
	else
	{
		new1->next=start;
		new1->prev=last;
		last->next=new1;
		start=new1;
	}	
}
void insertlast()
{
	int item;
	new1=(node*)malloc(sizeof(node));
	printf("enter item to insert at last:");
	scanf("%d",&item);
	new1->info=item;
	new1->next=start;
	if(last==NULL)
	{
		new1->prev=last;
		start=new1;
		last=new1;
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
	else
	{
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
}
void deletelast()
{
	node *ptr1;
	if(last==NULL)
	{
		printf("nderflow condition");
		return;
	}
	if(last==start)
		{
			ptr=start;
			last=NULL;
			start=NULL;
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
	printf("linked list in forward direction:\n");
	ptr=start;
	while(ptr->next!=start)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->next;
	}
	printf("\nlinked list in backward direction:\n");
	ptr=last;
	while(ptr->prev!=last)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->next;	
	}
}
void search()
{
	int item;
	node *loc;
	printf("enter the item to search:");
	scanf("%d",&item);
	ptr=start;
	while(ptr!=NULL)
	{
		if(ptr->info==item)
		{
			loc=ptr;
			break;
		}
		else
		{
			loc=NULL;
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
		printf("item is find at %d loaction",loc);
	}
}
