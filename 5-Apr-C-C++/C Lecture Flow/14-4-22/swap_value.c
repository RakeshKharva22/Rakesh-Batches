#include<stdio.h>
main()
{
	int a=10,b=20,c;
	
//	c=a; // 10
//	a=b; // 20
//	b=c; //10


	a = a+b; //30
	b=a-b ; // 30-20 =10
	a=a-b ; //30-10 = 20
	
	printf("a=%d and b=%d",a,b);
}