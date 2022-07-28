#include<stdio.h>

int add(int a,int b)
{

	return a+b;
}

void main()
{
	
	int no1,no2,cal;
	printf("\nEnter No1 :");
	scanf("%d",&no1);
	printf("\nEnter No2 :");
	scanf("%d",&no2);
	cal = add(no1,no2);
	printf("\nAddition is %d",cal);
	
}


