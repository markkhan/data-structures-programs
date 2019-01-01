#include<stdio.h>
int main()
{
	int a[2][2],n,m,j,i,sum=0;
	printf("enter elements :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("sum of matrix is %d",sum);
	return 0;
}
