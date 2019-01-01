#include<stdio.h>
#include<string.h>
int  main()
{
	char Str1[10],Str2[10];
	int i,len1,len2;
	
	printf("enter string first : ");
	gets(Str1);
	
	printf("enter the string 2 : ");
	gets(Str2);
	
	 	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
		   
  	if(Str1[i] > Str2[i])
   	{
   		printf("\n str1 is Less than str2");
	}
	else if(Str1[i] < Str2[i])
   	{
   		printf("\n str2 is Less than str1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}
  	
  	return 0;
}
