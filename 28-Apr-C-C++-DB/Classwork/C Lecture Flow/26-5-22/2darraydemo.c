#include <stdio.h>

void main()
{
	int i,j,a1[3][3],a2[3][3],a3[3][3];
	printf("\nEnter Array1 Elements \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	
	printf("\nArray1 Elements are : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a1[i][j]);
		}
	}
	
	printf("\nEnter Array2 Elements \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	
	printf("\nArray2 Elements are : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a2[i][j]);
		}
	}
	
	printf("\nAddition of 2 Array are : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a3[i][j] = a1[i][j] + a2[i][j];
			printf("\t%d",a3[i][j]);
		}
		//printf("\n");
	}
	
	
}