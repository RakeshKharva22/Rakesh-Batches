#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	float f;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/(float)b;
	printf("Addition is %d\n",c);
	printf("Subraction is %d\n",d);
	printf("Multiplication is %d\n",e);
	printf("Division is %.2f\n",f);
}