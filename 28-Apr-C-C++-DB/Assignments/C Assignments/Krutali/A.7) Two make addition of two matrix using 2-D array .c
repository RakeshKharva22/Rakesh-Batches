#include <stdio.h>

void main()
{
	int mat1[10][10], mat2[10][10], matadd[10][10];
	int x, y, i, j;
	printf("Enter row size (max-10): ");
	scanf("%d", &x);
	printf("Enter column size (max-10): ");
	scanf("%d", &y);
	printf("\nEnter elements of first matrix : \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		scanf("%d", &mat1[i][j]);
	}
	printf("\nEnter elements of second matrix : \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		scanf("%d", &mat2[i][j]);
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		matadd[i][j] = mat1[i][j] + mat2[i][j];
	}
	printf("\nThe matrix after addition : \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		printf("\t%d", matadd[i][j]);
		printf("\n");
	}
}