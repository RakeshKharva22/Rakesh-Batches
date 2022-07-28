#include<stdio.h>

void main()
{
	int n1,n2;
	printf("\nEnter A : ");
	scanf("%d",&n1);
	printf("\nEnter B : ");
	scanf("%d",&n2);
	printf("\nA = %d, B = %d",n1,n2);
	if(n1>n2)
	{
		printf("\nA is Greater");
	}
	else
	{
		printf("\nB is Greater");
	}
}