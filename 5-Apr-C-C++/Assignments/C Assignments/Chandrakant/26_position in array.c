#include<stdio.h>
int main()
{
	int a[50], i, n, j;
	printf("Enter the size of  the array : ");
	scanf("%d", &n);
	printf("Enter the elements in array : ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the j: ");
	scanf("%d", &j);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==j)
		{
			printf("Element Found ");
			return 0;
		}
	}
	
	printf("Element not found ");
}
