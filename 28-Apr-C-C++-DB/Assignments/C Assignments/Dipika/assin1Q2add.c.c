#include<stdio.h>
void main()
{
	int a,b,add,sub,mul;
	float div;
	printf("Enter A : \t");
	scanf("%d",&a);
	printf("Enter B : \t");
	scanf("%d",&b);
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/(float)b;
                        printf("\n A=%d,B=%d",a,b);
	printf("\nadditin is %d",add);
	printf("\nsubtraction is %d",sub);
	printf("\nmultiplication is %d",mul);
	printf("\ndivision is %.2f",div);
}

