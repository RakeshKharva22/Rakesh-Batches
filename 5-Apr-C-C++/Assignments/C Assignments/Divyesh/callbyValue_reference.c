//Call by Value & Reference in Function

#include<stdio.h>

void square(int n);
void _square(int *n);

int main(){
	int number = 5;
	square(number); //function call
	printf("Number = %d\n", number);
	
	_square(&number); //function call
	printf("Number = %d\n", number);

	return 0;
}
//call by value function

void square(int n){
	n = n * n;
	printf("Square = %d\n", n);	
}
// call by reference function

void _square(int *n){
	*n = (*n) * (*n);
	printf("Square = %d\n", *n);
}