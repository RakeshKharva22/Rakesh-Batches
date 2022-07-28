#include <stdio.h>

void swap(int a, int b);
void main()
{
	int a=10, b=20;
	printf("\nBefore swap : A = %d, B = %d",a,b);
	swap(a,b);
}

void swap(int a, int b)
{
	int swap;
	swap = a;
	a = b;
	b = swap;
	printf("\nAfter swap : A = %d, B = %d",a,b);   
}
