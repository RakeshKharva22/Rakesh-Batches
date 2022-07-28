#include<stdio.h>

void main(){
	int i, sum = 0;
	for(i = 1; i <=10; i++){
		printf("%d\n",i);
		sum = sum + i;
	//	printf("Sum is %d\n",sum);	
	}
	printf("Sum of No.'s is %d",sum);
	printf("I = %d",i);
}