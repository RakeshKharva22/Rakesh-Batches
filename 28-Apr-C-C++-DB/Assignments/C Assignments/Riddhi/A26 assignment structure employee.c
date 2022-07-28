#include <stdio.h>

struct employee{
	int eno;
	char name[10];
	int address;
	float age;
}e1;

void main()
{
	printf("\n--------employee details----------\n\n");
	printf("\nEnter no :");
	scanf("%d",&e1.eno);
	printf("\nEnter name :");
	scanf("%s",&e1.name);
	printf("\nEnter address :");
	scanf("%d",&e1.address);
	printf("\nEnter age :");
	scanf("%f",&e1.age);
	
	printf("\n\n-------Display---------\n\n");
	printf("\n Eno = %d",e1.eno);
	printf("\n Ename =%s",e1.name);
	printf("\n Eaddress =%d",e1.address);
	printf("\n Eege =%.2f",e1.age);
}