//Program to check whether a number is even or odd

#include<stdio.h>

int even_odd(int n);

int main(){
	int n;
	printf("Enter the Number: ");
	scanf("%d", &n);
	even_odd(n);
	return 0;
}

int even_odd(int n){
	if(n%2==0){
		printf("\n%d is an even number",n);
	}
	else{
		printf("\n%d is an odd number",n);
	}	
}