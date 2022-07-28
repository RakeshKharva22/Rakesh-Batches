#include <stdio.h>
int swap (int a ,int b)
{
	int c;
	c = a;
	a = b;
	b = c;
	
}
void main()
{
	int a =10 ,b =20;
	printf("\nBefore swap A = %d , B = %d",a,b);
	swap(a,b);
	printf("\nAfter swap A = %d , B = %d",a,b);
}