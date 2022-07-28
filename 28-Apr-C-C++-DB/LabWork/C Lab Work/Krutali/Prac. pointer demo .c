#include <stdio.h>

void main()
{
	int a=15,b=51;
	int *ptr1, *ptr2;
	ptr1 = &a;
	printf("\nAddress of A is : %u",*(ptr1));
	ptr2 = &b;
	printf("\nAddress of B is : %u",*(ptr2));
	
}