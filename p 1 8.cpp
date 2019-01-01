#include <stdio.h>
int main()
{
   int k,i,j,c,d,A[2][2], B[2][2], product[2][2];
 
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < 2; c++)
      for (d = 0; d < 2; d++)
         scanf("%d", &A[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < 2; c++)
      for (d = 0 ; d < 2; d++)
         scanf("%d", &B[c][d]);
    
	for(i=0; i<2; ++i)
        for(j=0; j<2; ++j)
        {
            product[i][j] = 0;
        }     
    for(i=0; i<2; ++i)
        for(j=0; j<2; ++j)
            for(k=0; k<2; ++k)
            {
                product[i][j]+=A[i][k]*B[k][j];
            }    
    printf("Product of the matrices:\n");
 
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("%d\t",product[i][j]);
		}
		printf("\n");
	}
	return 0;
	}
