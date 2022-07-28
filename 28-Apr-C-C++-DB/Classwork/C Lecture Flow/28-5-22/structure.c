/*
Structure : it stores data of different type.
*/

#include <stdio.h>

struct Employee{
	int eid;
	char name[5];
	float sal;
	
}e1;




void main()
{
	//struct Employee e1;	
	
	printf("\n\n-----Employee Details--------\n\n")	;
	printf("\nEnter Id :");
	scanf("%d",&e1.eid);
	printf("\nEnter Name :");
	scanf("%s",&e1.name);
	printf("\nEnter Salary :");
	scanf("%f",&e1.sal);
	
	printf("\n\n----Display-----------\n\n");
	printf("\nEid = %d",e1.eid);
	printf("\nEname = %s",e1.name);
	printf("\nSalary = %.2f",e1.sal);
	
	
	
	
}