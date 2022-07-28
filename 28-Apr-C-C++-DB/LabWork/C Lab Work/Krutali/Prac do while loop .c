#include <stdio.h>

void main()
{
	int a,b,choice;
	float div;
	
	do
	{
	printf("\n----Calculator menu----\n");
	printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division");
	printf("\n\nPlease enter your choice : ");
	scanf("%d", &choice);
	
	
	if (choice == 1)
	{
		printf("\nEnter any two numbers : \n");
		scanf("%d %d", &a,&b);
		printf("\nAddition is : %d",a+b);
		break;
	}
	if (choice == 2)
	{
		printf("\nEnter any two numbers : \n");
		scanf("%d %d", &a,&b);
		printf("\nSubtraction is ; %d",a-b);
		break;
	}
	if (choice == 3)
	{
		printf("\nEnter any two numbers : \n");
		scanf("%d %d", &a,&b);
		printf("\nMultiplication is : %d",a*b);
	    break;
	}
	if (choice == 4)
	{
		printf("\nEnter any two numbers : \n");
		scanf("%d %d", &a,&b);
		printf("\nDivision is : %.2f",a/(float)b);
		break;
	}
	else
	{
		printf("\nInvalid input");
		break;
	}
	}
	while (1);
}