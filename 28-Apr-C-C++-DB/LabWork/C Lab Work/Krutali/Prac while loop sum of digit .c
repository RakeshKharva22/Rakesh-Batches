#include <stdio.h>

void main()
{
	int a,sum=0;
	printf("Enter any number : ");
	scanf("%d", &a);
	
	while(a>0)
	{
		sum = sum + a%10;
		a = a/10;
	}
	printf("sum of digit : %d",sum);
}