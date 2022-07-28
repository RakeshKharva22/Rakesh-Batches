//Write a program you have to make a summation of first and last Digit.

#include<stdio.h>

int main(){
	int n, sum=0, First_digit, Last_digit;
	
	printf("Enter any Number: ");
	scanf("%d", &n);
	
	Last_digit = n % 10;
	
	while(n>=10){
		n = n / 10;
	}
	First_digit = n;
	sum = First_digit + Last_digit;
	
	printf("\nSum of First and Last Digit = %d", sum);
	
	return 0;
}
