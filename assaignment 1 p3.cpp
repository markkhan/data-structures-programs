/*WAP to insert an array*/
#include<stdio.h>
int main()
{
	int arr[100],i,n,loc,value;
	
	/*size of an array*/
    printf("enter the size of array : ");
    scanf("%d",&n);
	
	/*value of elements*/
	printf("enter the elements %d : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
	
	/*place to insert the new element*/
	printf("enter the location where you want to insert the new element : ");
	scanf("%d",&loc);
	/*value of new element*/
	printf("enter the  value : ");
	scanf("%d",&value);
	
	/*inserting a new element and increasing the size of an array.(logic)*/
	for(i=n-1;i>=loc-1;i--)
	{
		arr[i+1]=arr[i];
	}
	
	arr[loc-1]= value;
	
	/*result*/
	printf("resultant array : \n");
	
	for(i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
	
}
