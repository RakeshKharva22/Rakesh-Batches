#include <stdio.h>

void main()

{
	float b,h,area;
	
	printf("Enter height and base of triangle : ");
	scanf("%f%f",&h,&b);
	
	area=(h*b)/2;
	printf("\nArea of triangle is : %f",area);
}