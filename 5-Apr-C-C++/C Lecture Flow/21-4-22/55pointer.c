/*
Pointer: using pointer we can access address and also value at particular address

int a;

&=> address
*=> value

*/

#include<stdio.h>
main()
{
	
	int a=12,*p,**q;
	
	p=&a;
	q=&p;
	
	printf("%d\n",a); // 12
	
	printf("%d\n",p); // address of a 6684180
	
	printf("%d\n",*p); //12
		
	printf("%d\n",q); // address of p
	
	printf("%d\n",*q); // address of a 6684180
	
	printf("%d\n",**q);// 12
	
	
	
	
	
	
	
}