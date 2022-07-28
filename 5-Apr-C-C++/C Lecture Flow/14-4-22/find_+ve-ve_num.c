#include<stdio.h>
main()
{
	int num;
	
	printf("Enter any integer number: ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("+ve number ..!");
	}
	else
	{
			printf("-ve number ..!");
	}
	
	if(num%2==0)
	{
			printf("EVEN number ..!");
	}
	else
	{
			printf("ODD number ..!");
	}
}