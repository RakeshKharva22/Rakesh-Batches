#include <stdio.h>

void main()
{
	int i, j;
	
	printf("\nEnter I :");
	scanf("%d",&i);
	printf("\nEnter J :");
	scanf("%d",&j);
	printf("\n I =%d ,J =%d",i,j);
	add(i,j);
	sub(i,j);
	mul(i,j);
	div(i,j);
}

void add(int a ,int b)
{
	int add;
	add =a + b;
	printf("\nAddition = %d",add);
}

void sub(int a,int b)
{
	int sub;
	sub =a -b;
	printf("\nSubtraction =%d",sub);
	
}

void mul(int a,int b)
{
	int mul;
	mul =a *b;
	printf("\nmultiplication = %d",mul);
	
}

void div(int a,int b)
{
	
	float div;
	div =a /(float)b;
	printf("\nDivision = %d",div);
}