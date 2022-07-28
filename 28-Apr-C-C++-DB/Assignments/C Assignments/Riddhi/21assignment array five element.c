#include <stdio.h>

void main()
{
	int i , j, array [5];
	printf("\n-------elements--------\n");
	
	for(i =1 ;i <= 5; i++)
	{
		printf("\n\nenter elements [%d] =",i);
		scanf("%d",&array[i]);
    }
		printf("\n\n---------elements are-----------\n");
		
		for(j =1 ;j <=5 ; j++)
		{
			printf("\n\nelements [%d] = %d",j ,array[j]);
		}
	
}