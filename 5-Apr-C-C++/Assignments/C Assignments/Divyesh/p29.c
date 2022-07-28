//Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main() {
    int num, prime=1;    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    for(int i=2; i<num; i++){
    	if(num%i==0){
    		prime = 0;
    		break;
		}
   }  
		if(prime==0){
			printf("This is not a Prime Number.");
		}
		else{
			printf("This is a Prime Number.");
		}

	return 0;
}
