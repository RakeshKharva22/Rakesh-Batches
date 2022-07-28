#include <stdio.h>

void sqr()
{
	int a =5;
	printf("\n square is %d",(a * a));
}

void cube()
{
	int a =6;
	printf("\n cube is %d",(a*a*a));
}

void main()
{
	printf("\n In main code start .");
	sqr();
	cube();
	printf("\nIn main code end .");
	
}