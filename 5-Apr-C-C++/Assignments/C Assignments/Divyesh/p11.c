//Write a Program to show swap of two No's without using third variable.

#include <stdio.h>
int main(){
	int a = 30, b = 20;
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("%d %d", a,b);
	
	return 0;
	
}