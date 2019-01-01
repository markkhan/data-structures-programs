#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	printf("enter the string to check its palindrome or not : ");
	gets(a);
	
	strcpy(a,b);
	strrev(b);
	
	if(strcmp(a,b) == 0)
	{
		printf("string is palindrome\n");
	}
	else
	{
		printf("string is not palindrome\n");
	}
	return 0;	
}
