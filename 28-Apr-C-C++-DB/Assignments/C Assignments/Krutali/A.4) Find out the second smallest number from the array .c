#include<stdio.h>

void main()
{
	int arr[50], n, i, INT_MAX;
	
	printf("Enter the size of an array (max50)\n");
	scanf("%d", &n);
	
	printf("Enter an array elements : \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	int smallest = INT_MAX;
	int secondsmallest = INT_MAX;
	
	for(i=0;i<n;i++)
	{
		if(arr[i] < smallest)
		{
			secondsmallest = smallest;
			smallest = arr[i];
		}
		
		if(arr[i] > smallest && arr[i] < secondsmallest)
		{
			secondsmallest = arr[i];
		}
	}
	printf("Second smallest %d", secondsmallest);
}