#include <stdio.h>

void factorial (int num);

void main()
{
	int num;
	
	printf("Enter any number to find factorial : \n");
	scanf("%d", &num);
	
	factorial (num);
}
void factorial (int num)
{
	int count, fact = 1;
	
	if(num == 0)
	{
		printf("Factorial of 0 is 1 (!0 = 1)\n");
	}
	else
	{
		for(count=1;count<=num;count++)
		{
			fact = fact * count;
		}
		printf("\nFactorial of %d is %d (!%d = %d)\n", num, fact, num, fact);
	}
}