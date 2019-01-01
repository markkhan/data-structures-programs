#include<stdio.h>
int preorder(int);
int inorder(int);
int postorder(int);
char node[45]={'a','b','c','d','e','\0','f','\0','\0','\0','\0','\0','\0','g','h'};
int main()
{
	int root=0;
	printf("\npreorder:");
	preorder(root);
	printf("\ninorder:");
	inorder(root);
	printf("\npostorder:");
	postorder(root);
	return 0;
}
int preorder(int i)
{
	if(node[i]=='\0')
	{
		return 0;
	}
	printf("%c",node[i]);
	preorder(2*i+1);
	preorder(2*1+2);
}
int inorder(int i)
{
	if(node=='\0')
	{
		return 0;
	}
	inorder(2*i+1);
	printf("%c",node[i]);
	inorder(2*i+2);
}
int postorder(int i)
{
	if(node=='\0')
	{
		return 0;
	}
	postorder(2*i+1);
	postorder(2*i+2);
	printf("%c",node[i]);
}
