#include <stdio.h>
 
void main()
{
	int arr[5] = {12,14,59,63,95};
	int i;
	
	for(i=0;i<5;i++)
	{
		display (arr[i]);
	}
}

void display (int n)
{ 
     printf("\t%d",n);
}