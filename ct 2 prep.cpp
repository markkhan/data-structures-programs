#include<stdio.h>
int main()
{
	int a[10],i,n,beg,end,mid,item;
	printf("enter the vakue of n:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter element [%d]:",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter the elemnt to be searched:");
	scanf("%d",&item);
	
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	while((beg<=end) && (a[mid]!=item))
	{
		if(item<=a[mid])
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
	 	printf("searched item is found at location %d",mid+1);
	 }
	 else
	 {
	 	printf("no item found");
	 }
}
