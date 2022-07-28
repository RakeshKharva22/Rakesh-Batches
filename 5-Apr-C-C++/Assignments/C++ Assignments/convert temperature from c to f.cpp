#include<stdio.h>
int main()
{
	float celsius, fahrenheit;
	
	printf("Enter temperature in celsius: \n");
	scanf("%f", &celsius);
	
	fahrenheit = (1.8*celsius)+32;
	printf("temperature in fahrenheit : %f", fahrenheit);
	
	return 0;
}
