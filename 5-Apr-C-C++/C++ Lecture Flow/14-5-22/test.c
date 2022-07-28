#include <stdio.h>

void main()
{
	int choice;
	printf("\n1.Area of Circle \n2.Area of Rectangle");
	printf("\nEnter choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: AreaCircle();
				break;
		case 2 : AreaRect();
				break;
	}
	
}

void AreaCircle()
{
	float rad;
	printf("\nEnter radius :");
	scanf("%f",&rad);
	printf("\nArea of Circle is %.2f",3.14*rad*rad);
}

void AreaRect()
{
	int l,b;
	printf("\nEnter Length :");
	scanf("%d",&l);
	printf("\nEnter Breadth :");
	scanf("%d",&b);
	printf("\nArea of Rectangle is %d",l*b);
}