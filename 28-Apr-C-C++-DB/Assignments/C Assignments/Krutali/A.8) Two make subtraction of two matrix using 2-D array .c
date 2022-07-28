#include <stdio.h>

void main()
{
	int mat1[10][10], mat2[10][10], matsub[10][10];
	int a,b,c,d;
	
	printf("Enter row size (max-10) :");
	scanf("%d", &a);
	printf("\nEnter column size (max-10) :");
	scanf("%d", &b);
	printf("\nEnter element of 1st matrix : \n");
	for(c=0;c<a;c++)
	{
		for(d=0;d<b;d++)
		scanf("%d", &mat1[c][d]);
	}
	printf("\nEnter element of 2nd matrix : \n");
	for(c=0;c<a;c++)
	{
		for(d=0;d<b;d++)
		scanf("%d", &mat2[c][d]);
	}
	for(c=0;c<a;c++)
	{
		for(d=0;d<b;d++)
		matsub[c][d] = mat1[c][d] - mat2[c][d];
	}
	printf("\nThe matrix subtraction is : \n");
	for(c=0;c<a;c++)
	{
		for(d=0;d<b;d++)
		printf("\t%d", matsub[c][d]);
		printf("\n");
	}
} 