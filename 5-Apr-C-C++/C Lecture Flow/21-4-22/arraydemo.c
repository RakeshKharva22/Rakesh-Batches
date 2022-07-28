#include <stdio.h>

void main()
{
	int marks[5];
	int i = 0;
	
	// Accept Elements
	
	for(i = 0; i < 5; i++)
	{
		printf("\nEnter Element %d\n", i + 1);
		scanf("%d", &marks[i]);
	}
	
		for(i = 0; i < 5; i++)
	{
		printf("\nElement %d is %d\n", i + 1,marks[i]);
	}
	
}