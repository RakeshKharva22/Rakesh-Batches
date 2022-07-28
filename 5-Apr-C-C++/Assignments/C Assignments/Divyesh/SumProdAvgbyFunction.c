//write a function to calculate the sum, prodcut & average of 2 numbers. print athe average in the main function.

#include<stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
	int a = 3, b = 5;
	printf("a = %d, b = %d\n",a,b);
	int sum, prod, avg;
	doWork(a, b, &sum, &prod, &avg);
	printf("\nSum = %d\nProduct = %d\nAverage = %d",sum,prod,avg);
	return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){
	*sum = a + b;
	*prod = a * b;
	*avg = (a + b)/2;
}
