#include <stdio.h>

void main(){
	int i, j;
	int marks[3][3];
	
	printf("\nEnter Array Elements :");
	for(i = 0;i < 3; i++)
	{
		for(j = 0; j < 3; j++)	{
			printf("\nmarks[%d][%d] = ", i, j);
			scanf("%d",&marks[i][j]);
		}
	}
	
	printf("Array Elements are :\n");
	for(i = 0;i < 3; i++)
	{
		for(j = 0; j < 3; j++)	{
			printf("marks[%d][%d] = %d\n",i, j,marks[i][j]);
		}
	}
	
}
