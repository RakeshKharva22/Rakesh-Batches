#include <stdio.h>

void swap(int *n1, int *n2);


void main()
{
	int a =10 ,b =20;
	printf("\nBefore swapping A =%d , B =%d",a,b);
	swap(&a ,&b);
	printf("\nAfter swapping A =%d , B =%d",a,b);
}

void swap(int *n1 ,int *n2)
{
	printf("\n n1=%d ,n2=%d",n1,n2); //address
	int z;
	z = *n1;
	*n1 = *n2;
	*n2 = z;
}
