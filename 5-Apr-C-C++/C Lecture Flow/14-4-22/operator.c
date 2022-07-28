#include <stdio.h>

void main(){

int a = 10, b = 20;

if(a && b){
	printf("\nLine 1 - condition is true");
}

if(a || b){
	printf("\nLine 2 - condition is true");
}

a = 0;
b = 12;

if(!(a && b)){
	printf("\nLine 3 - condition is true");
}else{
	printf("\nLine 3 - condition is not true");
}


if(a || b){
	printf("\nLine 4 - condition is true");
} 


}
