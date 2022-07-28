#include <stdio.h>

void main()
{
	int r,c,a[5][5], i,j,b[5][5], t[5][5];
	printf("\nEnter the row limit :");
	scanf("%d", &r);
	printf("\nEnter the column limit :");
	scanf("%d", &c);
	printf("\nEnter the first matrix :");
	
	for(i =0; i<r ; i++)
	{
		for(j =0; j<c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter the second matrix :");
	for(i =0; i<r ; i++)
	{
		for(j =0; j<c; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for(i =0; i<r; i++)
	{
		for(j =0; j<c ; j++)
		{
			t[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("\ntotal value is :\n");
	for(i =0; i<r ; i++)
	{
		for(j =0; j<c; j++)
		{
			printf("%d",t[i][j]);
		}
		printf("\n");
	}
}