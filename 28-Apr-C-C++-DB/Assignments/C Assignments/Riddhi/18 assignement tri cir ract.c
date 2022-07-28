#include <stdio.h>

void main()
{
	int choice ,r, l, w, b, h;
	float area;
	printf("\n----------------------\n");
	printf("\n------choice menu------\n");
	
	printf("\n\n1 for area of circle\n");
	printf("\n\n2 for area of rectangle\n");
	printf("\n\n3 for area of triangle\n");
	printf("\n------------------------\n");
	printf("\nplease enter your choice :\t");
	scanf("%d",&choice);
	
	
	if(choice==1)
	{
		printf("\n\nEnter radius of the circle");
		printf("\n\nradious :");
		scanf("%d",&r);
		
		area =3.14*r*r;
		
	}
	else if(choice ==2)
	{
		printf("\n\nEnter length and width of the rectangle ");
		printf("\n\nlength :");
		scanf("%d",&l);
		printf("\n\nwidth  :");
		scanf("%d",&w);
		
		
		area =l*w;
		
	}
	else if(choice ==3)
	{
		printf("\n\nEnter the base and hight of the triangle");
		printf("\n\nbase :");
		scanf("%d",&b);
		printf("\n\nhight  :");
		scanf("%d",&h);
		
		area =(b*h) /2;
		
	}
	else
	{
		printf("\n\n Invalid choice ");
		
	}
	printf("\n the area is :%.2f",area);
	printf("\n-----------------------------\n");
}