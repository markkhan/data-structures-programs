#include<stdio.h>
#include<conio.h>
int main()
{
	int stack[5],top,max,item;
	if(top==max)
	{
		printf("stackoverflow");
		return 0;
	}
	else
	{
		top = top + 1;
	}
	stack[top]=item;
	return 0;
}
