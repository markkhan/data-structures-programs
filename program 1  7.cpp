#include <stdio.h>
 
int main()
{
   int c,d,first[2][2], second[2][2], sum[2][2];
 
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < 2; c++)
      for (d = 0; d < 2; d++)
         scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < 2; c++)
      for (d = 0 ; d < 2; d++)
         scanf("%d", &second[c][d]);
 
   printf("Sum of entered matrices:-\n");
 
   for (c = 0; c < 2; c++) {
      for (d = 0 ; d < 2; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}
