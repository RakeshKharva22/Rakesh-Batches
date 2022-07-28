#include <stdio.h>

void main()
{
	int *p;
	int n,i;
	printf("\nHow many elements you want to store ?\t");
	scanf("%d",&n);
	p =(int*)malloc(n*sizeof(int));
	
	printf("\n\nEnter elements inside array\n");
	for(i=0;i<=n;i++)
	{
		printf("Enter element[%d] :",i);
		scanf("%d",p+i);
	}
	
	printf("\n\nElements inside array are\n");
	for(i=0;i<=n;i++)
	{
		printf("Element[%d] :",i);
		printf("%d\n",*(p+i));
	}
}