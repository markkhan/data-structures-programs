//program to implement circular singly linked list//
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
	struct node *next;
};
typedef struct node node;
node *start,*last,*new1,*ptr;
int main()
{
	int choice;
	while(1)
	{
		printf("\n*****circular linked list operations******\n");
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
	new1->next=start;
	start=new1;
}
void insert_at_last()
{
	int item;
	new1=(node*)malloc(sizeof(node));
	printf("enter the element to be inserted at first:");
	scanf("%d",&item);
	new1->info=item;
	if(start==NULL)
	{
		ptr=start;
		start=new1;
		new1->next=start;
		return;
	}
	else
	{
		ptr=start;
		while(ptr->next!=start)
		{
			ptr=ptr->next;
		}
		ptr->next=new1;
		last=new1;
		last->next=start;
	}
}
void insert_at_loc()
{
	int item,i,loc;
	node *ptr1;
	new1=(node*)malloc(sizeof(node));
	printf("enter the element to be inserted at first:");
	scanf("%d",&item);
	new1->info=item;
	printf("enter the location to insert except forst and last:");
	scanf("%d",&loc);
	i=1;
	ptr=start;
	while(ptr->next!=start)
	{
		ptr1=ptr;
		ptr=ptr->next;
		i++;
	}
	ptr1->next=new1;
	new1->next=ptr;
	last->next=start;
}	
void delete_at_first()
{
	if(start==NULL)
	{
		printf("underflow");
		return;
	}
	else
	{
		ptr=start;
		start=start->next;
		printf("deleted item is %d",ptr->info);
		free(ptr);
	}
}
void delete_at_last()
{
	node *ptr1;
	if(start==NULL)
	{
		printf("underflow");
		return;
	}
	if(start->next=start)
	{
		ptr=start;
		start=NULL;
		printf("deleted element is %d",ptr->info);
		free(ptr);
		return;
	}
	else
	{
		ptr=start;
		while(ptr->next!=last->next)
		{
			ptr=ptr;
			ptr=ptr->next;
		}
		ptr1->next=start;
		last=ptr1;
	    printf("deleted element is %d",ptr->info);
		
	}
}
void delete_at_loc()
{
	int i,loc;
	node *ptr1;
	if(start==NULL)
	{
		printf("underflow");
		return;
	}
	else
	{
		printf("enter the location to delete an element:");
		scanf("%d",&loc);
		i=1;
		ptr=start;
		while(i<loc)
		{
			ptr1=ptr;
			ptr=ptr->next;
			i++;
		}
		ptr1->next=ptr->next;
		last->next=start;
		printf("deleted element is %d",ptr->info);
		free(ptr);
	}
}
void display()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		printf("linked list is :");
		ptr=start;
	    while(ptr!=last->next)
	    {
	    	
		    printf("%d\t",ptr->info);
		    ptr=ptr->next;
	    }
    }
}
void search()
{
	int item;
	node *loc=NULL;
	printf("enter the item to be searched:");
	scanf("%d",&item);
	ptr=start;
	while(ptr->next!=start)
	{
		if(ptr->info=item)
		{
			loc=ptr;
			break;
		}
	}
	if(loc==NULL)
	{
		printf("\nsearched item not found\n");
		return;
    }
	else
	{
		printf("item is found at %u",loc);
	}
}

