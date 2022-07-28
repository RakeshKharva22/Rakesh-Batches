#include <stdio.h>

int add(int a,int b)
{
	return a+b;
}

void main()
{
	int no1 ,no2 ,cal ;
	printf("\nEnter no1 :");
	scanf("%d",&no1);
	printf("\nEnter no2 :");
	scanf("%d",&no2);
	cal =add(no1 ,no2);
	printf("\nAddition is %d",cal);
}