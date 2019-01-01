//program to implement linear search//
#include<stdio.h>
int main()
{
	int a[10],i,n,item,loc=-1;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("enter the [%d] elements of an array:",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("enter the element to br searched :");
	scanf("%d",&item);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			loc=i;
			break;
		}
	}
	if(loc==-1)
	{
		printf("item not found");
	}
	else
	{
		printf("searched item is found at location %d",loc+1);
	}
	return 0;
}
