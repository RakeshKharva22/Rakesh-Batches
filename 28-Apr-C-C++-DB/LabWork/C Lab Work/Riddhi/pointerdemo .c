#include <stdio.h>

void main()
{
	int a=10 ,b=20;
	int *ptr1 ,*ptr2;
	ptr1 =&a ;
	printf("\n Address of A =%u",*(ptr1)); // to print address -> ptr1
	ptr2 =&b ;
	printf("\n Address of B =%u",*(ptr2)); //to print address -> ptr2
}