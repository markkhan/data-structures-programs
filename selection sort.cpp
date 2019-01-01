//selection sort//
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
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
                a[i]=a[j];
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
