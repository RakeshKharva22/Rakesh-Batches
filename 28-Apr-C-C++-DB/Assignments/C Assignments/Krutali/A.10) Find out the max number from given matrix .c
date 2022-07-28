#include <stdio.h>

void main()
{
	int i, j, max, mat[3][3];
	printf("Enter any 3*3 matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d", &mat[i][j]);
	}
	max = mat[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    if(max<mat[i][j])
		    max=mat[i][j];
		}
	}
	printf("\nLargest element = %d", max);
}