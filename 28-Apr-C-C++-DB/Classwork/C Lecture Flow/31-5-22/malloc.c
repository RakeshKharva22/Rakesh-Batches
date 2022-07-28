/*
Dynamic memory allocation. : Allocate memory at Runtime.
 
 3 types of function.
 1)malloc  - > mostly used
 2)calloc  ->  rarely used
 3)realloc -> very rare used.

to use this function we include a header.

#include <stdlib.h>

*/

#include <stdio.h>

void main()
{
	int *p;
	int n,i;
	printf("\nHow many elements you want to store ? \t");
	scanf("%d",&n);
	p = (int*) malloc(n*sizeof(int));
	
	printf("\n\nEnter Elements inside Array\n");
	for(i=0;i<=n;i++)	
	{
		printf("Enter Element[%d] : ",i);
		scanf("%d",p+i);
	}
	
	printf("\n\n Elements inside Array are\n");
	for(i=0;i<=n;i++)	
	{
		printf("Element[%d] : ",i);
		printf("%d\n",*(p+i));
	}
}