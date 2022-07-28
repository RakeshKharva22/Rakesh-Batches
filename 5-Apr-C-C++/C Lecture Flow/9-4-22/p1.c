#include <stdio.h>

void main(){
	int a, b, add, sub, mul;
	float div;
	printf("\n Enter Value of A\t");
	scanf("%d",&a);
	printf("\n Enter Value of B\t");
	scanf("%d",&b);
	printf("\n\nA = %d B = %d",a,b);
	add  = a + b;
	sub = a- b;
	mul = a * b;
	div = a / (float)b;
	printf("\nAddition is %d",add);
	printf("\nSubtraction is %d",sub);
	printf("\nMultiplication is %d",mul);
	printf("\nDivision is %.2f",div);
	
}