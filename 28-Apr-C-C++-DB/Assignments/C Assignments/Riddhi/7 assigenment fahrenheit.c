#include <stdio.h>

void main()
{
	float celsius,fahrenheit;
	
	printf("\n ENTER TEMPERATURE IN CELSIUS  :");
	scanf ("%d",&celsius);
	
	fahrenheit =(1.8 * celsius)+ 32;
	printf("\n TEMPERATURE IN FAHRENHEIT  :%f",fahrenheit);
	
}