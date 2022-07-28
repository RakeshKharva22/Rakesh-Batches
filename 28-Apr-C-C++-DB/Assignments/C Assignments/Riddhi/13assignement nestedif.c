#include <stdio.h>

void main()
{
	int a,b,c;
	
	printf("\nEnter A :");
	scanf("%d ",&a);
	printf("\nEnter B :");
	scanf("%d ",&b);
	printf("\nEnter C :");
	scanf("%d ",&c);
	printf("\nA =%d ,B =%d ,C =%d",a,b,c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n\nA is greater",a);
			
		}
		else
		{
			printf("\n\nC is greater",c);
			
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n\nB is greater",b);
		}
		else
		{
			printf("\n\nC is greater",c);
		}
		
	}
	
}