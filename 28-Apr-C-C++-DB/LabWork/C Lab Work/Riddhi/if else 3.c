#include <stdio.h>

void main()
{
	int a,b;
	printf("enter A:");
	scanf("%d",&a);
	printf("enter B:");
	scanf("%d",&b);
	printf("A=%d,B=%d",a,b);
	
	if(a>b)
	{
		printf("\nA is greater");
		
	}
	else
	{
		printf("\nB is greater");
		
	}
	if(a % 2 ==0)
	{
		printf("\nd is even",a);
	}
	else
	{
		printf("\n%d is odd",a);
	}
}