#include<stdio.h>
int main()
{
	int a, b, c, largest;
	printf("Enter the numbers a, b and c: ");
	scanf("%d, %d, %d", &a, &b, &c);
	
	largest = a>b ? (a>c ? a:c) : (b>c ? b:c);
	printf("%d is the largest number", largest);
	return 0;
}
