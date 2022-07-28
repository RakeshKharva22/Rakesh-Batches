#include <stdio.h>

struct Student_details{
	int rollno;
	char sname[10];
	float per;
}s1;

struct Employee_details{
	int eid;
	char ename[10];
	float salary;
}e1;

void main()

{
	int choice;
	printf("1.Student details \n2.Employee details");
	printf("\n\nEnter choice : ");
	scanf("%d", &choice);
	
	switch (choice)
	{
		case 1: 
	
	printf("\n----Students details----\n");
	printf("\n\nEnter student name : ");
	scanf("%s", &s1.sname);
	printf("\nEnter roll no : ");
	scanf("%d", &s1.rollno);
	printf("\nEnter percentage : ");
	scanf("%f", &s1.per);
	
	printf("\n\n----Display student details----\n\n");
	printf("\n\nName : %s",s1.sname);
	printf("\n\nRoll no : %d", s1.rollno);
	printf("\n\nPercentage : %.2f", s1.per);
	
	break;
	
	case 2:
	
	printf("\n\n----Employee details----\n");
	printf("\n\nEnter employee name : ");
	scanf("%s", &e1.ename);
	printf("\nEnter eid : ");
	scanf("%d", &e1.eid);
	printf("\nEnter salary : ");
	scanf("%f", &e1.salary);
	
	printf("\n\n----Display details----");
	printf("\n\nEmployee name : %s",e1.ename);
	printf("\n\nEid : %d",e1.eid);
	printf("\n\nSalary : %.2f",e1.salary);
	
	break;
	
	default : printf("Invalid choice");
	break;
}
}