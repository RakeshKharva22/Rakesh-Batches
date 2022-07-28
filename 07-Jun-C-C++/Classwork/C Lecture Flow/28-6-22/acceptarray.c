#include<stdio.h>

void main()
{
	int marks[5];
	int i;
	//Accept Array
	for(i=0;i<5;i++)
	{
		printf("Enter Element [%d] :",i);
		scanf("%d",&marks[i]);
	}	
	//Display Array
	printf("\n Array Elements are : \n");
	for(i=0;i<5;i++)
	{
		printf("Element [%d] = %d\n",i,marks[i]);		
	}
	
	
}