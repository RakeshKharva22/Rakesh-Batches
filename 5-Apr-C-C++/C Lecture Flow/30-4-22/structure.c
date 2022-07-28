#include <stdio.h>

struct Employee
	{
		int eid;
		char ename[10];
		float salary;
	};
	
//typedef struct{
//		int eid;
//		char ename[10];
//		float salary;	
//}Employee;

void main()
{
	struct Employee e1;
	//Employee e1;
	int a;
	
	printf("\n---------Enter Employee Details ---------\n");
	printf("\nEnter EID :\t");
	scanf("%d",&e1.eid);
	printf("Enter Ename :\t");
	scanf("%s",&e1.ename);
	printf("Enter Salary :\t");
	scanf("%f",&e1.salary);
	
	printf("\n---------Enter Employee Details ---------\n");
	printf("\n EID : %d",e1.eid);	
	printf("\nEname : %s", e1.ename);
	printf("\nSalary : %f\n",e1.salary);
	
	a = sizeof(e1);
	printf("Size is %lu",a);
	
	
	
	
}