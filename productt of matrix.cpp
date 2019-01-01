/*program for multplication of two matrixes */
#include<stdio.h>
int main()
{
	int a[10],b[10],product[10][10];
	int i,j,m,n,p,q,k,sum=0;
	
	printf("enter the number of rows and columns for matrix a : ");
	scanf("%d%d",&m,&n);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter element [%d][%d] for matrix a : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the number of rows and columns for matrix b : ");
	scanf("%d%d",&m,&n);
	
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("enter element [%d][%d] for matrix b : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	
	/*logic*/
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<p;k++)
			{
				product = sum + a[i][k] * b[k][j];
			}
		}
	}
	
	product[i][j] = product;
	
	printf("product of matrix A = %d and matrix b = %d : ",a[i][j],b[i][j]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
	return 0;
	
	
}
