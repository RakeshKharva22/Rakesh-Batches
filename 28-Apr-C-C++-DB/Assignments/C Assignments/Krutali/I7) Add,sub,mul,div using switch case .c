#include <stdio.h>

void addition();
void subtraction();
void multiplication();
void division();

void main()
{
	int choice;
	printf("\n1.addition \n2.subtraction \n3.multiplication \n4.division");
	printf("\nEnter choice = ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1 : addition();
		break;
		case 2 : subtraction();
		break;
		case 3 : multiplication();
		break;
		case 4 : division();
		break;
		default : printf("Invalid Input");
		break;
	}
}

void addition()
{
	int a,b,add;
	printf("\nEnter A :");
	scanf("%d", &a);
	printf("\nEnter B :");
	scanf("%d", &b);
	add=a+b;
	printf("\nAddition is : %d",add);
}

void subtraction()
{
	int a,b,sub;
	printf("\nEnter A :");
	scanf("%d", &a);
	printf("\nEnter B :");
	scanf("%d", &b);
	sub=a-b;
	printf("\nSubtraction is : %d",sub);
}

void multiplication()
{
	int a,b,mul;
	printf("\nEnter A :");
	scanf("%d", &a);
	printf("\nEnter B :");
	scanf("%d", &b);
	mul=a*b;
	printf("\nMultiplication is : %d",mul);
}

void division()
{
	int a,b;
	float div;
	printf("\nEnter A :");
	scanf("%d", &a);
	printf("\nEnter B :");
	scanf("%d", &b);
	div=(float) a / b;
	printf("\nDivision is : %.2f",div);
}