#include <stdio.h>

void main()
{
	int arr[5] ={14,12,54,13,69};
	int i;
	
	for(i =0;i<5 ;i++)
	{
		display (arr[i]);
	}
}

void display(int n)
{
	printf("\t%d",n);
}