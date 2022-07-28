#include <stdio.h>
#include <string.h>

union Employee{
	int eid;
	char ename[10];
	float esal;
};

void main()
{
	union Employee e1;
	int a;
	printf("\n---------Enter Employee Details ---------\n");
	
	printf("\nEnter EID :\t");
	scanf("%d",&e1.eid);
	printf("EID : %d",e1.eid);
	
	printf("\n\nEnter Ename :\t");
	scanf("%s",&e1.ename);
	printf("Ename : %s",e1.ename);
	
	printf("\n\nEnter Salary :\t");
	scanf("%f",&e1.esal);
	printf("Salary : %f\n",e1.esal);
		
	a = sizeof(e1);
	printf("%d",a);
	
	
	
	
}