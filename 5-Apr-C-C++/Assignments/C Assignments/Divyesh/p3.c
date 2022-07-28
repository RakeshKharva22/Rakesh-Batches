#include<stdio.h>
void main()
{
	int days, weeks, months, years;
	printf("Enter the total number of Days : ");
	scanf("%d", &days);
	
	years = days/365;
	months = days/30;
	weeks = days/7;
	
	printf("years : %d\n", years);
	printf("Months : %d\n", months);
	printf("Weeks : %d\n", weeks);
	
}