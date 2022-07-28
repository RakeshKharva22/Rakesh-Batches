#include <stdio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);

void main()
{
	int a, b, add, sub, mul;
	float div;
	printf("Enter two numbers : ");
	scanf("%d%d", &a,&b);
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/(float)b;
	printf("\nAddition is : %d",add);
	printf("\nSubtraction is : %d",sub);
	printf("\nMultiplication is : %d",mul);
	printf("\nDivision is : %.2f",div);
}
void add(int a, int b)
{
	a+b;
}
void sub(int a, int b)
{
	a-b;
}
void mul(int a, int b)
{
	a*b;
}
void div(int a, int b)
{
	a/(float)b;
}
	
	