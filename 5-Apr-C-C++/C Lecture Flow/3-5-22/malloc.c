#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *p, n, i ;
	
	p = (int*) malloc(n  * sizeof(int));

	printf("Enter no. of Element to store:   ");
	scanf("%d",&n);
	for(i = 0; i<n;i++)
	{
		printf("Enter Element A[%d]\t",i);
		scanf("%d",(p +i)); // &p[i]
	}
	
	printf("\nElements in Array are:\n");
	for(i=0;i<n;i++)
	{
		printf("Element[%d] = %d\n",i,*(p + i)); //p[i]
	}
	
}
