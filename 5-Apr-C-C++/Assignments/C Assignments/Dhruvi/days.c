#include<stdio.h>
void main()
{
	int days,years,months,weeks;
	printf("Enter days:");
	scanf("%d",&days);
	years=days/365;
	weeks=days/7;
	months=days/31;
	printf("Years are %d",years);
	printf("Weeks are %d",weeks);
	printf("Months are %d",months);
}