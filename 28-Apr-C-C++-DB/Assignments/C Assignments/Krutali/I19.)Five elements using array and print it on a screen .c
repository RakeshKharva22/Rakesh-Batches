#include <stdio.h>

void main()
{
	int arr[5] = {10,20,30,40,50};
	int length = sizeof(arr)/sizeof(arr[0]);
	
	printf("Elements of given array : \n");
	for(int i=0;i<length;i++)
	{
		printf("\n%d", arr[i]);
	} 
}