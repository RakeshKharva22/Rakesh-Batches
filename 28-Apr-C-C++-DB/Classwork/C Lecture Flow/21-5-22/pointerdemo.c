/*
pointer : is a special variable.
		  whose task is to store address of another variable.
		  
		  e.g int *ptr;
		  
		  *ptr -> is a pointer variable or special variable.
		  
		  %u -> unsigned integer -> value is alway +ve;
		  
		  * -> Value, & - at address
		  
		  *(&b) - > Value at Address
*/


#include <stdio.h>

void main()
{
	int a = 10, b =20;
	int *ptr1, *ptr2;
	//ptr1 = &a;
	printf("\n Address of A = %u",*(ptr1)); // to print address -> ptr1
	ptr2 = &b;
	printf("\n Address of B = %u",*(ptr2)); // to print address -> ptr2
}