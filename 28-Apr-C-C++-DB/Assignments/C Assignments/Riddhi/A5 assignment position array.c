#include <stdio.h>

void main()
{
	int a[10] ,n,element ,pos =0;
	int i;
	
	printf("enter array size [1-10] :");
	scanf("%d", &n);
	
	printf("enter array elements :");
	for(i =0; i<n; i++)
	scanf("%d", &a[i]);
	
	printf("enter element to search :");
	scanf("%d", &element);
	
	for(i =0; i<n ; i++)
	{
		if(a[i]==element)
		{
			printf("%d found at position %d",element ,i+1);
		}
	}
	printf("%d not found",element);
}