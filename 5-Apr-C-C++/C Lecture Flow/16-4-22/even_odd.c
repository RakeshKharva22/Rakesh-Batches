#include<stdio.h>
main()
{
	int number;
	
	printf("Enter any integer number : ");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("EVEN  number ...!\n");
	}
	
	else
	{
		printf("ODD  number...!\n");
	}
	
	if(number>0)
	{
		printf("+ve number ...!\n");
	}
	
	else
	{
		printf("-ve number...!\n");
	}
	
}