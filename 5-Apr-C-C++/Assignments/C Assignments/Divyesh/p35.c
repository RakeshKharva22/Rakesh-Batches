//Write a program to find out the max from given number.

#include <stdio.h>

int main() {
	int i, max, num, x;
	printf("How many numbers do you want to enter?: ");
	scanf("%d", &num);
	max = 0;
	
	for(i=1; i<=num; i++){
		scanf("%d",&x);

		if(max < x)
			max = x;
	}
	printf("\nMaximum Number = %d", max);

	return 0;
}
