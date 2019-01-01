#include<stdio.h>
int main()
{
	int array[20],i,n,base,w=2,k;
	int loc(array[i])
	printf("enter the size of an array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the element %d",i+1);
		scanf("%d",array[i]);
	}
	printf("enter the base adress : ");
	scanf("%d",&base);
	
	printf("enter the  element k: ");
	scanf("%d",&k);
	
	loc(array[i])=base + (w*k);
	
	printf("adress of the element k is %d",loc(arr[i]));
	
}
