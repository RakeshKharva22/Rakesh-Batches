//Write a program to convert temperature from degree centigrade to Fahrenheit.

#include<stdio.h>
int main (){
	float cel, far;
	printf("Enter value of Celsius: ");
	scanf("%f", &cel);
	
	far = (cel * 9/5) + 32;
	
	printf("Convert Celsius to Fahrenheit: %.2f", far);
	return 0;
	
}