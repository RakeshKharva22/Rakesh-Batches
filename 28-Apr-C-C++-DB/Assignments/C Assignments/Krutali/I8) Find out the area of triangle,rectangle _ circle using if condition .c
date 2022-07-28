#include <stdio.h>

void main()
{
	int choice, base, heigth, length, width, radius, area; 
	float pi=3.14;
	
	printf("\nArea of triangle\n");
	printf("\nEnter base = ");
	scanf("%d", &base);
	printf("Enter heigth = ");
	scanf("%d", &heigth);
	area = (base*heigth)/2;
	
	printf("\nArea of rectangle\n");
	printf("\nEnter length = ");
	scanf("%d", &length);
	printf("Enter width = ");
	scanf("%d", &width);
	area = (length*width);
	
	printf("\nArea of circle\n");
	printf("\nEnter radius = ");
	scanf("%d", &radius);
	area = 3.14*radius*radius;
	
	printf("\n1.Area of triangle \n2.Area of rectangle \n3.Area of circle");
	printf("\nPlease enter your choice");
	scanf("%d", &choice);
	
	if (choice == 1)
	{
		printf("Area of triangle is : %d",(base*heigth)/2);
	}
	
    else if (choice == 2)
	{
		printf("Area of rectangle is : %d",(length*width));
    }
	
	else if (choice == 3)
	{
		printf("Area of circle is : %.2f",(3.14*radius*radius));
    }
    else 
    {
    	printf("\nno no ye nahi");
	}
}