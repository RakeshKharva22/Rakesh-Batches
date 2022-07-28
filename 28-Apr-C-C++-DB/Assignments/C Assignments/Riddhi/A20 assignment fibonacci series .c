#include <stdio.h>

void fibonacciseries(int range)
{
	int a=0, b=1 ,c;
	while(a <= range)
	{
		printf("%d\t",a);
		c = a+b;
		a = b;
		b = c;
	}
}



void main()
{
   int range;
   printf("\nEnter range :");
   scanf("%d",&range);
   printf("The fibonacci series is :\n");
   fibonacciseries(range);	
}