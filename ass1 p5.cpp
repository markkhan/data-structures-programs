#include <stdio.h>

int main()
{
    int i, j, n;
    int matrix[10][10];
    int sum1=0,sum2=0;

    printf("Enter size of matrix : ");                                                                                           
    scanf("%d", &n);

    /* Input data in matrix */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");

    /* Display the matrix */
    printf("obtained matrix :\n");
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    /* Find the diagonal sum of matrix */
    for (i = 0; i < n; i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(i==j)
    	{
        sum1 =sum1 + matrix[i][j];
        }
        if((i+j)==(n-1))
        {
        	sum2 = sum2 + matrix[i][j];
		}
	}
        
}

    printf("\nSum of main diagonal = %d", sum1);
    printf("\nSum of other diagonal = %d", sum2);
    return 0;
}
