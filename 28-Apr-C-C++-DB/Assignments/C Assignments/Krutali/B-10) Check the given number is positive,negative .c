#include <stdio.h>

void main()
{
	int number;
	printf("\nEnter number = ");
	scanf("%d", &number);
	
	if(number > 0)
	{
		printf("Number is positive");
	}
	else if (number < 0)
	{
		printf("Number is negative");
	}
	else
	{
		printf("Number is zero");
	}
}