#include <stdio.h>

void main()
{
	int arr[4] = {5,10,15,20};
	int k;
	
	for(k=0;k<4;k++)
	{
		display (arr[k]);
	}
}

void display (int n)
{
	printf("\n%d",n);
}