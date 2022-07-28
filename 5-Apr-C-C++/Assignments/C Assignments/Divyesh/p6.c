// Write a program to find the Area of Circle

#include<stdio.h>

int main(){
	float radius, area;
	
	printf("Radius of Circle: ");
	scanf("%f", &radius);
	
	area = 3.14 * radius * radius;
	
	printf("Area of Circle: %.2f", area);
	return 0;
	
	
}
