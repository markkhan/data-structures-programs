//insertion sort//
#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=1;i<n;i++)
    {
    	
       temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0))
	  {
        a[j+1]=a[j];
        j=j-1;
      }
      a[j+1]=temp;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);

   return 0;
}
