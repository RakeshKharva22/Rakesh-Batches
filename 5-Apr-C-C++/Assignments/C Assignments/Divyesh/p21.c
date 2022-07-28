//Write a program to find the Max number from the given three number using Ternary Operator.

#include <stdio.h>

int main() {
	int a, b, c, max;
	
	printf("Enter any Three Numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	
	max = (a > b)? (a > c? a : c) : (b > c? b : c);
	printf("The largest number is: %d\n", max);
	
	
	return 0;
}
