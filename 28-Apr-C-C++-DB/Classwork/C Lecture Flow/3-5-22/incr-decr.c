#include <stdio.h>

void main()
{
	int a = 5, b =7;
	a = b++;
	b = ++a;
	printf("\nIncrement Operator A =%d, B = %d", a, b);
	a = --b;
	b = a--;
	printf("\nDecrement Operator A =%d, B = %d", a, b);
}