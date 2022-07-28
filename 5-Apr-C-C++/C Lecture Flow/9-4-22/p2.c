#include <stdio.h>

void main(){
	int days, year, week, month;
	printf("Enter Days: \t");
	scanf("%d",&days);
	year = days / 365;
	week = days / 7;
	month = days / 30;
	printf("year = %d , week = %d, month = %d",year, week, month);
}