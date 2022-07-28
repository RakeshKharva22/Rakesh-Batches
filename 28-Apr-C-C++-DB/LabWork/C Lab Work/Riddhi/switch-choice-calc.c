#include <stdio.h>

void main()
{
	int a,b,choice;
	float div;
	printf("\n------choice calculator-------\n\n");
	printf("enter A: ");
	scanf("%d",&a);
	printf("enter B: ");
	scanf("%d",&b);
	printf("A=%d,B=%d",a,b);
	printf("\n\n------ calc menu-------\n");
	printf("\n1.addition \n2.subtraction \n3.division \n4.multiplication");
	printf("\n\nplease enter your choice ?\n");
	scanf("%d",choice);
	
	switch (choice)
	{
		case1:printf("\naddition is %d",a+b);
		      break;
		case2:printf("\nsubtraction is %d",a-b);
		      break;
		case3:div=a/(float)b;
		      printf("\ndivision is %.2f",div);
		      break;
		case4:printf("\nmultiplication is %d",a*b);
		      break;
	    default:printf("\nInvalid choice");
	            break;
	            
	}
}