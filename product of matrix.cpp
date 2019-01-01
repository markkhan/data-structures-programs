//progrwm for product of matrix//
#include<stdio.h>
int main()
{
	int i,j,a[2][2],b[2][2],sum=0;
	printf("enter elemtns for a:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
	printf("enter elements for b:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				sum=sum+a[i][j]*b[i][j];
			}
		}
	printf("product of matrix:\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d\t",sum);
			}
			printf("\n");
		}
	
}
