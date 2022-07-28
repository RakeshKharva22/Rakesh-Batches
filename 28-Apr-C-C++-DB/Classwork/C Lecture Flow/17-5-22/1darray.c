#include<stdio.h>

void main()
{
	int arr1[5],arr2[5],res[5];
	int i,n;
	
	printf("-------Enter Elements of 1st Array ----\n\n");
	for(i = 0;i < 5;i++)
	{
		printf("Enter A[%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n\n-------Enter Elements of 2nd Array ----\n\n");
	for(i = 0;i < 5;i++)
	{
		printf("Enter A[%d] : ",i);
		scanf("%d",&arr2[i]);
	}
	
	printf("\n\n-------Addition of 2 Arrays ----\n\n");
	for(i = 0;i < 5;i++)
	{
		res[i] = arr1[i] + arr2[i];
		printf("\nResult[%d] = %d",i,res[i]);
	}
	
	
}