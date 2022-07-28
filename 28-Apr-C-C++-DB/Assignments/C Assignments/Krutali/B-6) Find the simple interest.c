#include <stdio.h>

void main()
{
	int SimpleInterest;
	int principal, time, roi;
	
	printf("\nEnter principal :");
	scanf("%d", &principal);
	
	printf("\nEnter roi :");
	scanf("%d", &roi);
	
	printf("\nEnter time :");
	scanf("%d", &time);
	
	SimpleInterest = (principal * roi * time) / 100;
	
	printf("\nSimpleInterest : %d", SimpleInterest);
}
