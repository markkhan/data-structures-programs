//program to implement binary search//
#include<stdio.h>
int main()
{
	int a[10],n,i,item,beg,end,mid;
	printf("enter the size of an array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter [%d] element :",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched :");
	scanf("%d",&item);
	
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	while((beg<=end) && (a[mid]!=item))
	{
		if(item <= a[mid])
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
		mid=(beg+end)/2;
	}
	if(a[mid]==item)
	{
		printf("\n an item is found at %d th location",mid+1);
	}
	else
	{
		printf("item not found");
	}
	return 0;
}
