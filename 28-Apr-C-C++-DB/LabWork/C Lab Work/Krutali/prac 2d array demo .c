#include <stdio.h>

void main()
{
	int i, j, a1[3][3], a2[3][3], a3[3][3];
	printf("\nEnter array 1 elements\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &a1[i][j]);
		}
	}
	printf("\nEnter array 1 elements are : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d", a1[i][j]);
		}
	}
	printf("\nEnter array 2 elements\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &a2[i][j]);
		}
	}
	printf("\nEnter array 2 elements are : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d", a2[i][j]);
		}
	}
	printf("\n\nAddition of 2 array are : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a3[i][j] = a1[i][j] + a2[i][j];
			printf("\t%d",a3[i][j]);
		}
	}
	printf("\n");
	
}