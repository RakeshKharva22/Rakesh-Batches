#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *p;
	int i,n;
	printf("How many elements you want to store ? \t");
	scanf("%d", &n);
	p = (int*) malloc(n*sizeof(int));
	
	printf("\nEnter elements inside array =>\n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter element[%d] : ",i);
		scanf("%d", p+i);
	}
	
	printf("\nEnter elements inside array are =>\n\n");
	for(i=0;i<n;i++)
	{
		printf("Elements[%d] : ",i);
		printf("%d\n",*(p+i));
	}
}