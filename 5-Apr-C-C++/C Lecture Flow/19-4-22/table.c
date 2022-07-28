#include<stdio.h>

void main(){
	int i,tabl,n;
	printf("\nEnter Value :\t");
	scanf("%d",&n);
	for(i = 1; i<=10; i++){
		tabl = n * i;
		printf("%d X %d =%d\n", n, i, tabl);
	}
}