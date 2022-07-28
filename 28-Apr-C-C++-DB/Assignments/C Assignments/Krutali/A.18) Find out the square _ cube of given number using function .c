#include <stdio.h>

void square(float a);

void main()
{
	float a, square, cube;
	printf("Enter any number : ");
	scanf("%f", &a);
	
	square = a*a;
	cube = a*a*a;
	
	printf("\nSquare is : %.2f", square);
	printf("\nCube is : %.2f", cube);
}

void square(float a)
{
	 a*a;
}

void cube(float a)
{
     a*a*a;
}