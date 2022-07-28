//Write a program to calculate sum of 5 subjects & find the percentage.
//Subject marks entered by user.

#include<stdio.h>
int main(){
	int s1, s2, s3, s4, s5, sum;
	float per;
	
	printf("Enter the marks of s1: ");
	scanf("%d", &s1);
	printf("Enter the marks of s2: ");
	scanf("%d", &s2);
	printf("Enter the marks of s3: ");
	scanf("%d", &s3);
	printf("Enter the marks of s4: ");
	scanf("%d", &s4);
	printf("Enter the marks of s5: ");
	scanf("%d", &s5);
	
	sum = s1+s2+s3+s4+s5;
	printf("Total marks: %d\n", sum);
	
	per = (sum * 100) / 500;
	printf("Percentage: %.2f", per);
	
	return 0;
	
}