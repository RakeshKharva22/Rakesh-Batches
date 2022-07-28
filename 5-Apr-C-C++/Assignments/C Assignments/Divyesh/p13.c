//write a program to check number is even or odd.

#include <stdio.h>
int main(){
	int a;
	printf("Enter a Number : ");
	scanf("%d", &a);
	
	if(a%2==0){
		printf("%d is even number",a);
		
	}else{
		printf("%d is odd number",a);
		
	}
	return 0;
}
