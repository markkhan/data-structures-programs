//doubly linked list inseritions//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert_at_first();
void insert_at_loc();
void insert_at_last();
void display();
struct node
{
	struct node *prev;
	int info;
	struct node *next;
};
typedef struct node node;
node *start,*last,*new1,*ptr;
int main()
{
	int ch;
	while(1)
	{
		printf("\n menu\n");
		printf("\n1.first\n2.last\n3.loc\n4.exit\n");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_at_first();
				display();
				break;
			case 2:
			    insert_at_last();
				display();
				break;
			case 3:
			    insert_at_loc();
				display();
				break;
			case 0: exit(0);
			default:printf("\nbhag bhosrike\n");			
		}
	}
}
void create_empty_list()
{
	start=NULL;
	last=NULL;
}
void insert_at_first()
{
	int item;
	new1=(node*)malloc(sizeof(node));
	printf("enter the element to insert:");
	scanf("%d",&item);
	new1->prev=NULL;
	new1->info=item;
	if(start==NULL)
	{
		new1->next=NULL;
		start=new1;
		last=new1;
	}
	else
	{
		new1->next=start;
		start->prev=new1;
		start=new1;
	}
}
void insert_at_loc()
{
	int i,item,loc;
	node *ptr1;
	new1=(node*)malloc(sizeof(node));
	printf("enter an item to insert:");
	scanf("%d",&item);
	new1->info=item;
	printf("enter the loc. to insert a new element:");
	scanf("%d",&loc);
	i=1;
	ptr=start;
	while(i<loc)
	{
		ptr1=ptr;
		ptr=ptr->next;
		i++;
	}
	new1->next=ptr->next;
	ptr1->next=new1;
	new1->prev=ptr->prev;
	ptr->prev=new1;
}
void insert_at_last()
{
	int item;
	new1=(node*)malloc(sizeof(node));
	printf("enter an item to insert:");
	scanf("%d",&item);
	new1->info=item;
	new1->next=NULL;
	if(last==NULL)
	{
		new1->prev=NULL;
		start=new1;
		last=new1;
	}
	else
	{
		new1->prev=last;
		last->next=new1;
		last=new1;
	}
}
void display()
{
	if(start==NULL)
	{
		printf("linked list is empty");
		return;
	}
	else
	{
		printf("\nlinked list is forwsrd direction:\n");
		ptr=start;
		while(ptr!=NULL)
		{
			printf("\t%d",ptr->info);
			ptr=ptr->next;
		}
		printf("\nlinked list in backward direction:\n");
		ptr=last;
		while(ptr!=NULL)
		{
			printf("\t%d",ptr->info);
			ptr=ptr->prev;
		}
	}
}
