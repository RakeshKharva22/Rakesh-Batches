//Write a program to find the cube of a given number by defining a user-defined function.

#include<stdio.h>

float cube(float a);

int main(){
	float num, result;
	printf("Enter a Number: ");
	scanf("%f", &num);
	result = cube(num);
	printf("Cube of %.2f = %.2f\n", num, result);

	return 0;
}

float cube(float a){
	float result= a*a*a;
	return result;
}

