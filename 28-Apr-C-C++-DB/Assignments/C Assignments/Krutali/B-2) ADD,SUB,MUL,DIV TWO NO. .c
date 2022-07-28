#include <stdio.h>

void main()

{
	int a,b,add,sub,mul;
	float div;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/(float)b;
	printf("\naddition is = %d",add);
	printf("\nsubtraction is = %d",sub);
	printf("\nmultiplication is = %d",mul);
	printf("\ndivision is = %.2f",div);
	
	
}