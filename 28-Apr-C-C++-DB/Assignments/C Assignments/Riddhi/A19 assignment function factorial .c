#include <stdio.h>

void main()
{
	fact();
}

void fact()
{
	int i ,n ,fact =2;
	printf("\n Enter any number ;");
	scanf("%d",&n);
	
	for(i =1; i<=n; i++)
	{
		fact = fact * i;
	}
	printf("\n factorial is :%d",fact);
}