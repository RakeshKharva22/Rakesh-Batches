//Write a program to sum the first ten natural numbers using a for loop.

#include <stdio.h>

int main() {
	int i, n=10, sum=0;
	
	for(i=1; i<=n; i++){
		sum+=i;
	}
    printf("The value of sum(1 to 10) is %d", sum);	

	return 0;
}
