#include<stdio.h>

void main(){
	int outer, inner, tabl;
	
	for(outer=2; outer<=7; outer++){
		
		for(inner=1; inner<=10; inner++){
			tabl = outer * inner;
			printf("%d X %d = %d\n", outer, inner, tabl);
		}
		printf("\n");
	}
}