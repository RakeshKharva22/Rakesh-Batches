#include <stdio.h>

void main()
{
	int Rollno, Total, Sub1, Sub2, Sub3, Sub4, Sub5;
	char name[10];
	float per;
	
	printf("\n-----Student info-----\n\n");
	printf("Enter Rollno - ");
	scanf("%d", &Rollno);
	printf("Enter name - ");
	scanf("%s", &name);
	printf("Enter physics marks - ");
	scanf("%d", &Sub1);
	printf("Enter chemistry marks - ");
	scanf("%d", &Sub2);
	printf("Enter maths marks - ");
	scanf("%d", &Sub3);
	printf("Enter english marks - ");
	scanf("%d", &Sub4);
	printf("Enter computer marks - ");
	scanf("%d", &Sub5);
	
	Total = Sub1+Sub2+Sub3+Sub4+Sub5;
	
	per = (float)Total / 5;
	
	printf("\n-----Students details-----\n");
	printf("\nRollno - %d",Rollno);
	printf("\nname - %s",name);
	printf("\nTotal - %d",Total);
	printf("\nper - %.2f",per);
}