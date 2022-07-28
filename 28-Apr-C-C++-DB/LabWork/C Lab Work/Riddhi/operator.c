#include <stdio.h>
void main()
{
	int a=5 ,b=7;
	a=b++;
	b=++a;
	printf("\n increment operator A=%d ,B=%d ,a,b");
	
	a=--b;
	b=a--;
	
	printf("\n decreament operator A=%d ,B=%d",a,b);
	
}