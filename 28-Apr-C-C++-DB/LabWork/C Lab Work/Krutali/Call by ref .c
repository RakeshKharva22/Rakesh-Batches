#include <stdio.h>

void main()
{
	int a=10, b=20;
	printf("\nBefore swaping A=%d, B=%d",a,b);
	swap(&a, &b);
	printf("\nAfter swaping A=%d, B=%d",a,b);
}

void swap(int *n1, int *n2)
{
	printf("\nN1=%d, N2=%d",n1,n2);
	int z;
	z=*n1;
	*n1=*n2;
	*n2=z;
}