#include<stdio.h>
#include<conio.h>
int main()
{
	int A[10][10],T[10][10];
	int r,c,i,j;
	
	printf("enter the number if rows and columns : ");
	scanf("%d%d",&r,&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the element [%d][%d] : ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			T[j][i]=A[i][j];
		}
    }
    printf("matrix A = \n");
     for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
    }
    
    printf("\n");
    printf("transpose of matrix :\n");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",T[i][j]);
		}
		printf("\n");
    }
     return 0;
}
