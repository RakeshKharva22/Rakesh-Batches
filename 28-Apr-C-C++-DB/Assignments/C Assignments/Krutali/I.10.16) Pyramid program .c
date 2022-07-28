#include<stdio.h>

void main()
{
	//upper pattern
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	//lower pattern
	for(int i=5;i>0;i--)
	{
		for(int j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}