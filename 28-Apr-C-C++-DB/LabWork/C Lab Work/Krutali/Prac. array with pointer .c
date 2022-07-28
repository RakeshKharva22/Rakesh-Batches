#include <stdio.h>

void main()
{
	int arr[7] = {7,14,21,28,35,42,49};
	
	printf("\nDisplay adress\n");
	printf("\n%u", arr+0);
	printf("\n%u", arr+1);
	printf("\n%u", arr+2);
	printf("\n%u", arr+3);
	printf("\n%u", arr+4);
	printf("\n%u", arr+5);
	printf("\n%u", arr+6);
	
	printf("\n\nDisplay value\n");
	printf("\n%d", *(arr+0));
	printf("\n%d", *(arr+1));
	printf("\n%d", *(arr+2));
	printf("\n%d", *(arr+3));
	printf("\n%d", *(arr+4));
	printf("\n%d", *(arr+5));
	printf("\n%d", *(arr+6));
	
}