#include<stdio.h>
main()
{
	char op;
	
	int n1,n2;
	
	printf("Enter any operator sign (+,-,*,/,%) : ");
	scanf("%c",&op);
	
	printf("Enter first integer number: ");
	scanf("%d",&n1);
	
	printf("Enter second integer number: ");
	scanf("%d",&n2);
	
	
	switch(op)
	{
		case '+': 
				printf("Sum of %d and %d = %d\n",n1,n2,n1+n2);
		break;
		
		case '-':
		
				printf("Subtraction of %d and %d = %d\n",n1,n2,n1-n2); 
		break;
		
		case '*': 
		
				printf("Multiplication of %d and %d = %d\n",n1,n2,n1*n2);
		break;
		
		case '/': 
		
				printf("Division of %d and %d = %d\n",n1,n2,n1/n2);
		break;
		
		case '%': 
		
				printf("Remainder(Modulus) of %d and %d = %d\n",n1,n2,n1%n2);
		break;
		
		default:
			
			printf("\nInvalid operator sign...!");
	}
}