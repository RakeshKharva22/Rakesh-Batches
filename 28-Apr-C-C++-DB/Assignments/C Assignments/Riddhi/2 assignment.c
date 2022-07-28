#include <stdio.h>

void main()
{
	int a,b,add,sub,mul;
	float div;
	printf("two number");
	printf("enter A:\t");
	scanf("%d",&a);
	printf("enter B:\t");
	scanf("%d",&b);
	printf("/nA=%d,/nB=%d",a,b);
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/(float)b;
	
	printf("\naddition is %d",add);
	printf("\nsubtraction is %d",sub);
	printf("\nmultipication is %d",mul);
	printf("\ndivision is %.2f",div);
	
	
	 
	
}