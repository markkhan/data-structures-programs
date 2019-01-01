#include<stdio.h>
#include<stdlib.h>
#define maxsize 20
void push();
void pop();
void display();
int stack[maxsize],top = -1;

int main()
{
	int choice;
	
	while(1)
	{
		printf("\n 1.push");
		printf("\n 2.pop");
		printf("\n 3.display");
		printf("\n 0.exit");
		
		printf("enter your choice :");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				push();
				display();
				break;
			
			case 2:
			    pop();
				display();
				break;
			
			case 3:
			    display();
				break;
			
			case 4:
			    exit(0);
			default : 
			printf("\n you entered wrong choice");				
		}
	}
}
void push()
{
	int item;
	
	if(top == maxsize-1)
	{
		printf("\n stackoverflow");
		return;
	}
	else
		printf("enter the eleement to be inserted");
		scanf("%d",&item);
	    top = top + 1;
	    stack[top] = item;
}
void pop()
{
	int item;
	if(top==-1)
	{
	    printf("\n stack underflow");
	    return;
	}
	else
	{
	    item = stack[top];
		top = top - 1;
	printf("\n deleted element is %d",item);
    }
}
void display()
{
	int i;
	if(top=-1)
	{
	    printf("\n stack is empty");
	    return;
	}
	else 
	{
	    printf("\nstack is :\n");
	    for(i=top;i>0;i--)
	    {
	    	printf("%d",stack[i]);
		}
    }
	    
}
