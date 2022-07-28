#include <stdio.h>

void main()
{
	int i=1;
	
//	printf("\nBy using for loop : ");
//	for(i=1;i<=10;i++)
//	{
//		printf("\n%d",i);
//	}

//    printf("\nBy using while loop : ");
//	while(i<=10)
//	{
//	    printf("\n%d",i);
//		i++;	
//	}
	
	printf("\nBy using do...while loop : ");
	do
	{
		printf("\n%d", i);
		i++;
	}
	while(i<=10);
}