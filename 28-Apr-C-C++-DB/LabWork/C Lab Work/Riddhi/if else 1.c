#include <stdio.h>

void main()
{
	int a=10, b=43;
	//a=0;
	if(a && b)
	

    {
         printf("\nline 1--condition is true ");	
	}
    else
    {
    	printf("\nline2--condition is false");
	}
	a=0;
	b=10;
	if(a||b)
	{
		printf("\nline3--condition is true");
		
	}
	else
	{
		printf("\nline4--condition is false");
	}
	if(!(a && b))
	{
		printf("\nline5--condition is true");
	}
	{
		printf("\nline6--condition is false");
	}
}