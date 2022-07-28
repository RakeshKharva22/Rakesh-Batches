#include <stdio.h>

void main()
{
	int arr[5] = {10,24,56,47,96};
	
	printf("\nDisplay Address\n");
	printf("\n%u",arr+0); // 0 index base address
	printf("\n%u",arr+1);//  1 index address
	printf("\n%u",arr+2);
	printf("\n%u",arr+3);
	printf("\n%u",arr+4);
	
	printf("\n\nDisplay Value\n");
	printf("\n%d",*(arr+0)); // 0 index base address
	printf("\n%u",*(arr+1));//  1 index address
	printf("\n%u",*(arr+2));
	printf("\n%u",*(arr+3));
	printf("\n%u",*(arr+4));
}