//Write a program to find the Max number from the given three number using Nested If

#include <stdio.h>

int main(){
	int a,b,c;
	printf("Enter three value: ");
	scanf("%d %d %d", &a,&b,&c);
	
	if(a>b){
		if(a>c){
			printf("A is a greater number \n");
		}
			else{
				printf("C is a greater number \n");
				}		
		}else if(b>c){
			printf("B is a greater number \n");
		}
	else{
		printf("C is a greater number \n");
		}		
		return 0;
	}
