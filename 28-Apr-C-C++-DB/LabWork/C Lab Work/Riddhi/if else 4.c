#include <stdio.h>

void main()
{
	int a,b,choice;
	float div;
	printf("\n-------choice calcultor--------\n");
	printf("enter A:");
	scanf("%d",&a);
	printf("enter B:");
	scanf("%d",&b);
	printf("A=%d,B=%d",a,b);
	printf("\n-----calc menu-----\n");
	printf("\n1,addtion \n2,subtraction \n3,division \n4,multiplication");
	printf("\nplease enter your choice ?,\n");
	scanf("%d",&choice);
	
	if(choice ==1)
	{
		printf("\naddition is %d",a+b);
	}
	else if(choice==2)
	{
		printf("\nsubtraction is %d",a-b);
	}
	else if(choice==3)
	{
		div=a/(float)b;
		printf("\ndivision is %.2f",div);
	}
	else if(choice==4)
	{
		printf("\nmultiplication is %d",a*b);
	}
	else
	{
		printf("\ninvalid choice");
	}
	
}