#include <stdio.h>

void main()
{
	int matrix1[3][3],matrix2[3][3], i, j,add[3][3];
	
	printf("Enter Matrix 1 : \n");
	for(i = 0;i < 3; i++)
	{
		for(j = 0; j < 3; j++)	{
			printf("Matrix1[%d][%d] = ", i, j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("Enter Matrix 2 : \n");
	for(i = 0;i < 3; i++)
	{
		for(j = 0; j < 3; j++)	{
			printf("Matrix1[%d][%d] = ", i, j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	printf("Addition of Matrix 1 and Matrix 2 is: \n");
	for(i = 0;i < 3; i++)
	{
		for(j = 0; j < 3; j++)	{
			add[i][j] = matrix1[i][j]+matrix2[i][j];
			printf("%d\t",add[i][j]);
		}
		printf("\n");
	}
	
	
}
