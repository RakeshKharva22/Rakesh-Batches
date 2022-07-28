//write a program in c to find the maximum number between two numbers using a popinter.

#include<stdio.h>

int main(){
	int n1, n2;
	int *ptr1, *ptr2;
	
	printf("Enter First Number: ");
	scanf("%d", &n1);
	printf("Enter Second Number: ");
	scanf("%d", &n2);
	
	ptr1 = &n1;
	ptr2 = &n2;
	
	if(*ptr1 > *ptr2){
		printf("Maximum number is %d", *ptr1);
	}
	else{
		printf("Maximum number is %d", *ptr2);
	}
	
	return 0;
}
