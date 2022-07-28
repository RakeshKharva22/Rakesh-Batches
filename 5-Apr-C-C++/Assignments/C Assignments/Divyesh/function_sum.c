//Sum of 2 values by using Function.

#include<stdio.h>

int sum(int a, int b);

int main(){
	int a, b;
	printf("Enter First Value: ");
	scanf("%d", &a);
	printf("Enter Second Value: ");
	scanf("%d", &b);
	
	int s = sum(a, b);
	printf("Sum = %d\n", s);	
	return 0;
}

int sum(int x, int y){
	return x + y;	
}
