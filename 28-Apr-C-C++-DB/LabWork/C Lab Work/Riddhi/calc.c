#include <stdio.h>
void main()
{
	
	int a,b,c,add,sub,mul;
	float div;
	
	printf("Enter A :");
	scanf("%d",&a);// accept data
	printf("Enter B;\+");
	scanf("%d",&b);// accept data
	printf("\nA=%d,B=%d",a,b);
	
	c=a+b;
	sub=a-b;
	mul=a*b;
	div=a/(float)b;
	printf("\n addition is %d",add);
	printf("\n subtraction is %d",sub);
	printf("\n multiplication is %d",mul);
	printf("\n division is %2f",div);
	
	
	
	
	
}