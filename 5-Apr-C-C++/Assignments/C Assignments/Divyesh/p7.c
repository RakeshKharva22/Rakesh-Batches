// Write a program to find the Area of Triangle

#include<stdio.h>
int main(){
	float base, height, area;
	
	printf("Base of Triangle: ");
	scanf("%f", &base);
	
	printf("Height of Triangle: ");
	scanf("%f", &height);
	
	area = 0.5 * base * height;
	
	printf("Area of Triangle: %.2f\n", area);
	return 0;
	
}