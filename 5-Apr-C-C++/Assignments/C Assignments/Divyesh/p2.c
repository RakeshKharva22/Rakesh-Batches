#include<stdio.h>
int main()
{
	int n, square, cube;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	square = n*n;
	cube = n*n*n;
	
	printf("square= %d\n", square);
	printf("cube= %d\n", cube);
	
}