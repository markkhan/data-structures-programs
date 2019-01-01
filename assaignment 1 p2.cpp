//WAP to find the maximum element in an array A of size n.

#include<stdio.h>
int  main()
{
	int arr[100],n,i,max;
	
	//no.'s selected by the user.
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	//values assaigned to the elements.
	for(i=0;i<n;i++)
	{
	printf("element %d : ",i+1);
	scanf("%d",&arr[i]);
    }
    
    //initialising  array at elemnt 0 first.
    max=arr[0];
    
    //logic.
    for(i=0;i<n;i++)
    {
    	if(arr[i]>max)
    	max = arr[i];
	}
    
    //result
    printf("\nthe maximum element is %d",max);
     return 0;

}
