#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	int i;
	
	printf("enter the string : ");
	gets(s);
	
	printf("string in uppercase : ");
	for(i=0;s[i]!=0;i++)
	printf("%c",s[i]-32);
	return 0;
}
