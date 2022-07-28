//Swap 2 numbers a & b.

#include<stdio.h>

void swap(int *a, int *b);

int main(){
	int x = 5, y = 3;
	printf("Before Swap x = %d & y = %d", x, y);
	
	swap(&x, &y);
	printf("\nAfter Swap x = %d & y = %d", x, y);
	return 0;
}

void swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
