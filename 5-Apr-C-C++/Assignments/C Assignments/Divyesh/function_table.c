//Print Table of any n number by function.

#include<stdio.h>

void printTable();

int main(){
	int n;
	printf("Enter the Number: ");
	scanf("%d", &n);
	
	printTable(n);
	return 0;
}
int sum(int a, int b);

void printTable(int n){
	for(int i=1; i<=10; i++){
		printf("%d\n", i*n);
	}
}
