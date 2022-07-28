#include <stdio.h>

void main()
{
	int starCount=5;
	for(int i=5;i>=0;i--)
	{
		for(int j=5;j>i;j--)
		{
			printf(" ");
		}
		for(int k=0;k<starCount;k++){
			printf(" *");
		}
		starCount--;
		printf("\n");
	}
}