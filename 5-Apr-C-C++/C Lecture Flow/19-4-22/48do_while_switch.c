#include<stdio.h>
main()
{
	int n1,n2;
	

	
	char choice;
	
	printf("Enter your choice (+,-,*,/): ");
	scanf("%c",&choice);
	
	printf("Enter first integer number: ");
	scanf("%d",&n1);
	
	printf("Enter second integer number: ");
	scanf("%d",&n2);
	
	
	do
	{
		printf("Do you want to continue : (Y/N): ");
		scanf("%c",&choice);
		
			switch(choice)
				{
					case '+': 
					printf("Sum = %d",n1+n2);
					break;
					
					case '-': 
					printf("Subtraction = %d",n1-n2);
					break;
					
					
					case '*': 
					printf("Multiplication = %d",n1*n2);
					break;
					
					case '/': 
					printf("Division = %d",n1/n2);
					break;
					
					
					default:
						
						printf("Invalid choice..!");
				}

	
		
	}while(choice=='Y' || choice=='y');
	
	
	
	
	
}