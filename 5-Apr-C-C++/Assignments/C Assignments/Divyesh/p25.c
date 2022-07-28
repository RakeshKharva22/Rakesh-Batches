//Write a program to print n natural numbers in reverse order.

#include <stdio.h>

int main() {
	int i,n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	for(i=n; i; i--){
		printf("The value of i is %d\n", i);
	}

	return 0;
}
