#include<stdio.h>
int main()
{
	int a[10][10],t[10][10],n,i,j,sum1=0;
	printf("enter the size of matrix:");
	scanf("%d",&n);
	printf("enter elements of matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(i==j)
			{
				sum1=sum1+a[i][j];
			}
		}
	}
	printf("obtained matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nsum of matrix is %0d",sum1);
}
