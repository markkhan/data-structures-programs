/* C program to reverse Two Strings without using strrev() */
 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str1[100];
  	int len, i;
 
  	printf("\n Please Enter the First String :  ");
  	gets(str1);
  	
  	for(i = 0; str1[i]!='\0'; i++)
  	{
  		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str1[i]);
	}
	return 0;
}
