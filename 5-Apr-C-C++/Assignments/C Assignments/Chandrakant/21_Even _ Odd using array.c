#include<stdio.h>
int main()
{
	int size, i ,a[10];
	int evencount = 0, oddcount = 0;
	
	printf("\nEnter the size of an array : ");
	scanf("%d", &size);
	
	printf("Enter the array elements : \n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(a[i] % 2 == 0)
		{
			evencount++;
		}
		else
		{
			oddcount++;
		}
	}
	
	printf("Total even numbers in this array = %d\n", evencount);
	printf("Total odd numbers in this array = %d\n", oddcount);
}
