//Write a program make a summation of given number(E.g. 1523 ans :-11).

#include<stdio.h>

int main(){
	int num, sum=0;
	
	printf("Enter any Number: ");
	scanf("%d", &num);
	
	while(num>0){
		sum = sum + num%10;
		num = num / 10;	
	}
	
	printf("Sum of Number = %d", sum);

	return 0;
}
