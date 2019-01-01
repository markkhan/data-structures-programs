//*WAP for finding sum and average of numbers using array.//

#include<stdio.h>
int main()
{
	int arr[100],i,n,sum=0;
	
	/*elements entered by user*/
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	//value of selected elements.
	for(i=0;i<n;i++)
	{
		printf("enter element %d : ",i + 1);
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	
	//result.
	printf("\nsum of elements : %d",sum);
     printf("\nThe average of the array is : %0.2f", (float)sum / n);
	return 0;
}
