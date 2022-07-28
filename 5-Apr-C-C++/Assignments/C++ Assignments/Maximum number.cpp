#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the numbers a, b and c: ");
	scanf("%d, %d, %d", &a, &b, &c);
	
	if(a>=b && a>=c) {
		printf("%d is a largest number", a);
	}
	else if(b>=a && b>=c) {
		printf("%d is a largest number", b);
	}
	else
	printf("%d is a largest number", c);
	
	return 0;
}
