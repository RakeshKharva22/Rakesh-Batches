#include<stdio.h>
int main()
{
	int choice r, l, w, b, h;
	float area;
	printf("Input 1 for the area of Triangle\n");
	printf("Input 2 for the area of rectangle\n");
	printf("Input 3 for the area of circle\n");
	printf("Input yor choice: ");
	scanf("%d", &choice);
	switch(choice)
}
	{
		case 1:
			printf("Input base and hight of Triangle: ");
			scanf("%d%d", &b, &h);
			area = .5*b*h;
			break;
			
		case 2:
			printf("Input length and width of rectangle: ");
			scanf("%d,%d", &l, &w);
			area = l*w;
			break;
			
		case 3:
			printf("Input the radius of circle: ");
			scanf("%d", &r);
			area = 3.14*r*r;
			break;
	}
	
	printf("The area is : %f\n", area);
	return 0;
	
}
