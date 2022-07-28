#include <stdio.h>

void main()
{
	int a,b;
	printf("\nEnter the two values to swap\n");
	scanf("%d%d", &a,&b);
	printf("\nbefore swapping a = %d and b = %d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nafter swapping a = %d and b = %d",a,b);
}