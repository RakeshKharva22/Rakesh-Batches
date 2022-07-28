#include <stdio.h>

void main()
{
	int a =10, b=20;
	int *ptr1, *ptr2;
	
	ptr1 =&a;
	ptr2 =&b;
	printf("\nBefore swapping A =%u, B =%u",*(ptr1), *(ptr2));
	*ptr1 = (*ptr1) * (*ptr2);
	*ptr2 = (*ptr1) / (*ptr2);
	*ptr1 = (*ptr1) / (*ptr2);
	printf("\nAfter swapping A =%u, B =%u",*(ptr1),*(ptr2));
}