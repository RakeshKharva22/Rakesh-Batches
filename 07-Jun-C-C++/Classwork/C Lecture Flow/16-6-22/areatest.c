#include <stdio.h>

void main()
{
	const float pi=3.14;
	float r,l,b;	
	printf("\nEnter Radius, Length, Breadth : ");
	scanf("%f%f%f",&r,&l,&b);
	printf("\nArea of Circle = %.2f",(pi*r*r));
	printf("\nArea of Rectangle = %.2f",(l*b));
	printf("\nArea of Triangle = %.2f",(0.5*l*b));
}