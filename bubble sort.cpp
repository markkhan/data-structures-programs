//bubble sort//
#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
			}
		}
	}
	printf("sorted array is :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
