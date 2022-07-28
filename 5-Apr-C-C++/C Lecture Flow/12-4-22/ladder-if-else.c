#include <stdio.h>

void main(){
	int marks;
	printf("\nEnter Marks : \t");
	scanf("%d",&marks);
	if(marks >75){
		printf("Distinction");
	}
	else if(marks > 60){
		printf("\nClass A");
	}
	else if(marks > 50){
		printf("\nClass B");
	}
	else if(marks > 40){
		printf("\nPass Class");
	}
	else{
		printf("\nFail");
	}
	

     