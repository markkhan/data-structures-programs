#include<stdlib.h>
#include<stdio.h>
void insertatfirst();
void insertatlast();
void insertatloc();
void display();
struct node
{
	int info;
	struct node *link;
};
typedef struct node node;
node *start,*new1,*ptr;
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.insert at first\n 2.insert at last\n3.insert at location\n0.exit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertatfirst();
				display();
				break;
			case 2:
			    insertatlast();
				display();
				break;
			case 3:
				insertatloc();
				display();
				break;
			case 4:display();
			       break;	
				
			case 0:exit(0);	
			default:printf("you entered wrong choice");		 	
		}
	}
}
void createemptylist()
{
	start=NULL;
}
void insertatfirst()
{
	int item;
	new1=(node*)malloc(sizeof(node));
	printf("enter the item to be inserted:");
	scanf("%d",&item);
	new1->info=item;
	new1->link=start;
	start=new1;
}
void insertatloc()
{
	int item,loc,i;
	node *ptr1;
	new1=(node*)malloc(sizeof(node));
	printf("enter the element to be inserted:");
	scanf("%d",&item);
	new1->info=item;
	printf("enter the location at which element is inserted except first and last:");
	scanf("%d",&loc);
	i=1;
	ptr=start;
	while(i<loc)
	{
		ptr1=ptr;
		ptr=ptr->link;
		i++;	
	}
	ptr1->link=new1;
    new1->link=ptr;
}
void insertatlast()
{
	int item;
	new1=(node*)malloc(sizeof(node));
	printf("enter the elemnt to be inserted:");
	scanf("%d",&item);
	new1->info=item;
	new1->link=NULL;
	if(start==NULL)
	{
		start=new1;
		return;
	}
	else
	{
		ptr=start;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
	}
	ptr->link=new1;
}
void display()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
	ptr=start;
	while(ptr!=NULL)
	{
		printf("\n%d",ptr->info);
		ptr=ptr->link;
	}
    }
}
