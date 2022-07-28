// Write a program to find the Area of Rectangle

#include<stdio.h>
 
int main() {
	int length, width, area;
	
	printf("Length of rectangle:");
	scanf("%d", &length);
	
	printf("Width of rectangle:");
	scanf("%d", &width);
	
	area = length * width;
	
	printf("Area of rectangle: %d\n", area);
	return 0;
	
}
