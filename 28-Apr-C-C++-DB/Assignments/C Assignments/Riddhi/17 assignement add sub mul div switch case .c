#include <stdio.h>

void main()
{
	int a, b, choice;
	float div;
	printf("\n-------choice calculater-------\n\n");
	printf("Enter A :");
	scanf("%d",& a);
	printf("Enter B :");
	scanf("%d",& b);
	printf("A =%d,B =%d",a,b);
	
	printf("\n------------calc menu------------\n\n");
	printf("\n1.Addition \n2.subtraction \n3.multiplication \n4.division");
	printf("\n\n please enter your choice ?\n");
	scanf("%d",choice);
	
	switch(choice)
	{
		case 1:printf("\nAddition is %d",a+b);
               break;
        case 2:printf("\nSubtraction is %d",a-b);
               break;
        case 3:printf("\nMultiplication is %d",a*b);
               break;
        case 4:div= a/(float)b;
               printf("\nDivision is %d",div);
               break;
        default:printf("Invalid choice");
                break;
    
	}
	
	
}