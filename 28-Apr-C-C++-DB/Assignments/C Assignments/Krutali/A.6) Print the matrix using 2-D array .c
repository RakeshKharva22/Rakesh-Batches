#include<stdio.h>

void main()
{
	int i, j, row,column, arr[10][10];
	
	printf("Enter row size of array (max-10) : ");
	scanf("%d", &row);
	
	printf("\nEnter column size of array (max-10) : ");
	scanf("%d", &column);
	
	printf("\nEnter array elements : %d\n\n", row*column);
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		scanf("%d", &arr[i][j]);
    }
    printf("\nThe array is : \n");
    for(i=0;i<row;i++)
    {
    	for(j=0;j<column;j++)
    	printf("\t%d", arr[i][j]);
    	printf("\n");
	}
}