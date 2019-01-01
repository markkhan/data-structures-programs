/*WAP to calculate the length of string without using library functions*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int length;
	
	printf("enter the string :");
	gets(str);
	
	length = 0;
	
	while(str[length] != 0)
	{
		length++;
	}
	printf("length of string is : %d",length);
	return 0;
}
