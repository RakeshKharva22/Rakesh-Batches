#include <stdio.h>

void main()
{
	int x,y;
	printf ("input valur for x & y :\n");
	scanf("%d%d",&x,&y);
	
	printf("Before swapping the value of x & y :%d %d",x, y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nAfter swapping the value of x & y : %d %d",x,y);
	
}