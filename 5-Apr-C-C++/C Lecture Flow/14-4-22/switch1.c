#include <stdio.h>

void main(){
	char ch;
	int a = 30, b = 23, add, sub, mul;
	float div;
	printf("\n---------Choice Calculator--------\n");
	printf("\n A = %d , B = %d",a ,b);
	printf("\n1.Add \n2.Sub \n3.Mul \n4.Div");
	printf("\nEnter ur choice: \t");
	scanf("%c",&ch);
	switch(ch){
		case '1':add = a + b;
				printf("\nAddition is %d", add);
				//break;
		case '2':sub = a - b;
				printf("\nSubtraction is %d", sub);
				//break;
		case '3':mul = a * b;
				printf("\nMultiplication is %d", mul);
				//break;
		case '4':div = a /(float) b;
				printf("\nDivision is %f", div);
				//break;
		default:
				printf("\nInvalid Input");
				break;
	}
	
	
	
}