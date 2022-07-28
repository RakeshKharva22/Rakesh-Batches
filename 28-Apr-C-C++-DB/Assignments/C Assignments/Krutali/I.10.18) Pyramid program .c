#include<stdio.h>

void main()
{
	int numberOfLine=5;
	int kSpace = 0, lSpace = numberOfLine;
	
	for(int i=numberOfLine;i>=0;i--)
	{
		for(int j=i;j>0;j--)
		{
			printf("*");
		}
		for(int k=kSpace;k>0;k--)
		{
			printf(" ");
		}
		for(int l=lSpace;l<numberOfLine;l++)
		{
			printf(" ");
		}
		for(int m=i;m>0;m--)
		{
			printf("*");
		}
		lSpace--;
		kSpace++;
		printf("\n");
	}
}