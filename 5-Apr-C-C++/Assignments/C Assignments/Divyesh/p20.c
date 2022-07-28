//To find largest among two numbers using ternary operator.

#include <stdio.h>

int main() {
	int a = 10, b = 15;
	
	(a > b)? printf("a is greater than b that is %d > %d", a,b):printf("b is greater than a that is %d > %d", a,b);
	
	return 0;
}
