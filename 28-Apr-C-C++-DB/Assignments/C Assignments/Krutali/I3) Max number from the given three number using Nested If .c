#include <stdio.h>

void main()
{
	int n1=0, n2=0, n3=0;
	printf("Please enter the number 1 : ");
	scanf("%d", &n1);
	printf("Please enter the number 2 : ");
	scanf("%d", &n2);
	printf("Please enter the number 3 : ");
	scanf("%d", &n3);
	
	if (n1 > n2)
	{
		if (n1 > n3)
		{
			printf("\nValue of n1 : %d is maximum", n1);
		}
	}
	if (n2 > n1)
	{
		if(n2 > n3)
		printf("\nValue of n2 : %d is maximum", n2);
	}
	if (n3 > n1)
	{
		if (n3 > n2)
		{
			printf("\nValue of n3 : %d is maximum", n3);
		}
	}
}