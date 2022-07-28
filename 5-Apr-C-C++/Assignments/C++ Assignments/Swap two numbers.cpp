#include<stdio.h>
int main()
{
	int a= 20, b= 40;
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swap a=%d, b=%d\n", a,b);
	return 0;
}
