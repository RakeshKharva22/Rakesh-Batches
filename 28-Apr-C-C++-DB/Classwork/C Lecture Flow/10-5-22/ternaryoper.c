#include<stdio.h>

void main()
{
	int a =50, b= 120,max;
	printf("A = %d, B = %d\n\n",a,b);
//	if(a > b)
//	{
//		printf("A is Greater");
//	}
//	else
//	{
//		printf("B is Greater");
//	}

	//max = (a > b)? a : b;
	//printf("%d is Greater",max);
	
	(a > b)?printf("A is Greater") : printf("B is Greater");
}