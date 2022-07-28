#include<stdio.h>.

void main()
{
	int a[10], n, element, pos=0;
	int i;
	
	printf("Enter array size : ");
	scanf("%d", &n);
	
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
	{
	    scanf("%d", &a[i]);
	}
	
	printf("Array element to search: ");
	scanf("%d", &element);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==element)
		{
			printf("%d Found at position %d",element,i+1);
		}
	}
    printf("%d Not found : ",element);
}