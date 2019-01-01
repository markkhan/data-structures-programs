#include<stdio.h>
int main()
{
	int a[3][3],t[3][3],n,m,j,i,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter elements [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("transpose:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
