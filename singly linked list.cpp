//program to implement singly linked list//
#include<stdio.h>
#include<stdlib.h>
void insert_at_first();
void insert_at_loc();
void insert_at_last();
void delete_at_first();
void delete_at_loc();
void delete_at_last();
void display();
void search();
struct node
{
	int info;
	struct node *link;
};
typedef struct node node;
node *start,*new1,*ptr;
int main()
{
	int choice;
	while(1)
	{
		printf("\n*****singly linked list operations******\n");
	    printf("1. insert at first\n");
	    printf("2. insert at location\n");
	    printf("3. insert at last\nk");
	    printf("4. delete at first\n");
	    printf("5. delete at location\n");
	    printf("6. delete at last\n");
	    printf("7. search\n");
    	printf("8. display\n");
	    printf("0. exit\n");
	    printf("enter your choice:");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1 : insert_at_first();
	    	         display();
	    	         break;
	    	         
	    	case 2 : insert_at_loc();
			         display();
					 break;
			
			case 3 : insert_at_last();
			         display();
					 break;
					 
			case 4 : delete_at_first();
			         display();
					 break;
					 
			case 5 : delete_at_loc();
			         display();
					 break;
			
			case 6 : delete_at_last();
			         display();
					 break;
			
			case 7 : search();
			         display();
			         break;
			
			case 8 : display();
			         break;
			
			case 0 : exit (0);		 		 		 		 		 		 	          
		}
	}
}

void create_emptylist()
{
	start=NULL;
}
void insert_at_first()
{
	int item;
	new1=(node*)malloc(sizeof(node));
	printf("enter the element to insert:");
	scanf("%d",&item);
	new1->info=item;
	new1->link=start;
	start=new1;
}
void insert_at_loc()
{
	int item,loc,i;
	new1=(node*)malloc(sizeof(node));
	node *ptr1;
	printf("enter the elemnt to be inserted at a loc except 1st and last:");
	scanf("%d",&item);
	new1->info=item;
	printf("enter the location to insert a new elemnt:");
	scanf("%d",&loc);
	i=1;
	ptr=start;
	while(i<loc)
	{
		ptr1=ptr;
		ptr=ptr->link;
		i++;
	}
	new1->link=ptr;
	ptr1->link=new1;
}
void insert_at_last()
{
	int item;
	new1=(node*)malloc(sizeof(node));
	printf("enter the lement to be inserted:");
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
void delete_at_first()
{
	if(start==NULL)
	{
		printf("underflow coondition");
		return;
	}
	else
	{
		ptr=start;
		start=start->link;
		printf("deleted element is %d",ptr->info);
		free(ptr);
	}
}
void delete_at_loc()
{
	int i,loc;
	node *ptr1;
	if(start==NULL)
	{
		printf("underflow condition");
		return;
	}
	else
	{
		printf("enter the location to delete an elemnt:");
		scanf("%d",&loc);
		ptr=start;
		while(i<loc)
		{
			ptr1=ptr;
			ptr=ptr->link;
			i++;
		}
		ptr1->link=ptr->link;
		printf("deleted item is %d",ptr->info);
		free(ptr);
	}
}
void delete_at_last()
{
	node *ptr1;
	if(start==NULL)
	{
		printf("underflow conddition");
		return;
	}
	if(start->link==NULL)
	{
		ptr=start;
		start=NULL;
		printf("deleted element is %d",ptr->info);
		free(ptr);
		return;
	}
	else
	{
		node *ptr1;
		ptr=start;
		while(ptr->link=NULL)
		{
			ptr1=ptr;
			ptr=ptr->link;
		}
		ptr1->link=ptr->link;
		printf("deleted elemnt is %d",&ptr->info);
		free(ptr);
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
		ptr=ptr->link;
	}
	if(loc==NULL)
	{
		printf("item not found");
	}
	else
	{
		printf("item is found at location %u",loc);
	}
}
void display()
{
	printf("the linked list is:");
	ptr=start;
	while(ptr!=NULL)
	{
		printf("\n%d",ptr->info);
		ptr=ptr->link;
	}
}
