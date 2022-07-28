#include<stdio.h>

void main()
{
	int dhruv1[5],dhruv2[5],dhruv3[5];
	int i;
	//Accept Array
	printf("\n\nEnter Array1 Elements : \n");
	for(i=0;i<5;i++)
	{
		printf("Enter Element [%d] :",i);
		scanf("%d",&dhruv1[i]);
	}	
	//Display Array
	printf("\n Array1 Elements are : \n");
	for(i=0;i<5;i++)
	{
		printf("Element [%d] = %d\n",i,dhruv1[i]);		
	}
	
	printf("\n\nEnter Array2 Elements : \n");
	for(i=0;i<5;i++)
	{
		printf("Enter Element [%d] :",i);
		scanf("%d",&dhruv2[i]);
	}	
	//Display Array
	printf("\n Array2 Elements are : \n");
	for(i=0;i<5;i++)
	{
		printf("Element [%d] = %d\n",i,dhruv2[i]);		
	}
	
	
	printf("\n Addition of 2 Arrays are : \n");
	for(i=0;i<5;i++)
	{
		dhruv3[i] = dhruv1[i] + dhruv2[i];
		printf("Element [%d] = %d\n",i,dhruv3[i]);		
	}
	
}