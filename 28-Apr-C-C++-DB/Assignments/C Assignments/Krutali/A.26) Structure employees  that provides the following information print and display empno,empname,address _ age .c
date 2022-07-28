#include <stdio.h>

struct{
	int empno;
	int age;
	char address[50];
	char empname[50];
}e1;

void main()
{
	printf("-*-*-*-EMPLOYEE DETAILS-*-*-*-");
	printf("\n\nEnter employee name : ");
	scanf("%s", &e1.empname);
	printf("\nEnter employee no : ");
	scanf("%d", &e1.empno);
	printf("\nEnter employee address : ");
	scanf("%s", &e1.address);
	printf("\nEnter employee age : ");
	scanf("%d", &e1.age);
	
	printf("\n\n\n-*-*-*-DISPLAY DETAILS-*-*-*-\n\n");
	printf("\n\nEmployee name : %s", e1.empname);
	printf("\n\nEmployee no : %d", e1.empno);
	printf("\n\nEmployee address : %s", e1.address);
	printf("\n\nEmployee age : %d", e1.age);
}