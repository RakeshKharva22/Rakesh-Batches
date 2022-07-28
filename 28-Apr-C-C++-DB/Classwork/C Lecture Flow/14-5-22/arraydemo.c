/*
	Array : Arrays store multiple elements of same type.

*/


#include <stdio.h>

void main()
{
	float marks[5];
	int i;
	
	printf("\nEnter Array Elements : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Enter Array[%d] = ",i);
		scanf("%f",&marks[i]);
	}
	
	
	printf("\nArray Elements are: \n");
	for( i=0;i<5;i++)
	{
		printf("\nArray[%d] = %f",i,marks[i]);
	}
	
}