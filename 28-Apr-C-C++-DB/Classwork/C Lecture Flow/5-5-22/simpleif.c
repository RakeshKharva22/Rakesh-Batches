#include <stdio.h>

void main()
{
	int a, b;
	printf("Enter A: ");
	scanf("%d",&a);
	printf("\nEnter B: ");
	scanf("%d",&b);
	printf("\nA = %d, B = %d",a,b);
	if(a > 0)
	{
		printf("\n%d is +ve",a);
	}
	else
	{
		printf("\n%d is -ve",a);
	}
}