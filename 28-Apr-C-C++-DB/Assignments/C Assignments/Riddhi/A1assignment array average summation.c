#include <stdio.h>

void main()
{
	int i ,j ,k[10],sum =0;
	float average;
	
	
	for(i =1 ; i<=10 ;i++)
	{
		printf("\nenter elements [%d] = ",i);
		scanf("%d",&k[i]);
		
	}
	for(i =1; i <= 10; i++)
	
	
	{
		printf("\nenter elements [%d]",i, k[i]);
		
		sum =sum +k[i];
		average =sum/(float)10;
	}
	printf("\n\n the sum is : %d",sum);
	printf("\n\n the average is : %.2f",average);
}