//program to calculate the average of five numbers.

#include<stdio.h>

void average(int a, int b, int c, int d, int e);

void main(){
	int a,b,c,d,e;
	printf("Enter Five Numbers: ");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	
    average(a,b,c,d,e);
}

void average(int a, int b, int c, int d, int e){
	float avg;
	avg = (a+b+c+d+e)/5;
	printf("The average of five numbers is %.2f", avg);
}