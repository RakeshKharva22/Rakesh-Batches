//Write a program to calculate the factorial of a given number using for loop.

#include <stdio.h>

int main() {
	int i, n, factorial=1;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		factorial*=i;
	}
	    printf("The value of factorial %d is %d", n, factorial);
	    
	return 0;
}
