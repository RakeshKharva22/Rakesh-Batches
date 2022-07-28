//Write a Program of Print a number and check the number is palindrome or not.

#include<stdio.h>

int main(){
	int num, remainder, reversed=0, original;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	original = num;
	
	while(num != 0){
		remainder = num % 10;
		reversed = reversed*10 + remainder;
		num /= 10;
	}
	
	if(original == reversed){
		printf("%d is a Palindrome number.\n", original);
	}
	else{
		printf("%d is not a Palindrome number.\n", original);
	}
	
	return 0;
}
