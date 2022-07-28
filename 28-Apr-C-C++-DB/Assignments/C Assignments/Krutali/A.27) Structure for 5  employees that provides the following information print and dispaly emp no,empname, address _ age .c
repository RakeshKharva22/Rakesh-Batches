#include <stdio.h>

struct{
	int empno, age;
	char empname[50], address[50];
}e1;

struct{
	int empno, age;
	char empname[50], address[50];
}e2;

struct{
	int empno, age;
	char empname[50], address[50];
}e3;

struct{
	int empno, age;
	char empname[50], address[50];
}e4;

struct{
	int empno, age;
	char empname[50], address[50];
}e5;

void main()
{
	printf("-*-*-*-1ST EMPLOYEE DETAILS-*-*-*-");
	printf("\n\nEnter employee name : ");
	scanf("%s", &e1.empname);
	printf("\nEnter employee no : ");
	scanf("%d", &e1.empno);
	printf("\nEnter employee age : ");
	scanf("%d", &e1.age);
	printf("\nEnter employee address : ");
	scanf("%s", &e1.address);
	
	printf("\n\n-*-*-*-1ST EMPLOYEE DISPLAY-*-*-*-");
	printf("\n\nEmployee name : %s",e1.empname);
	printf("\n\nEmployee no : %d",e1.empno);
	printf("\n\nEmployee age : %d",e1.age);
	printf("\n\nEmployee address : %s",e1.address);
	
	
	printf("\n\n\n-*-*-*-2ND EMPLOYEE DETAILS-*-*-*-");
	printf("\n\nEnter employee name : ");
	scanf("%s", &e2.empname);
	printf("\nEnter employee no : ");
	scanf("%d", &e2.empno);
	printf("\nEnter employee age : ");
	scanf("%d", &e2.age);
	printf("\nEnter employee address : ");
	scanf("%s", &e2.address);

	printf("\n\n-*-*-*-2ND EMPLOYEE DISPLAY-*-*-*-");
	printf("\n\nEmployee name : %s",e2.empname);
	printf("\n\nEmployee no : %d",e2.empno);
	printf("\n\nEmployee age : %d",e2.age);
	printf("\n\nEmployee address : %s",e2.address);
	
	
	printf("\n\n\n-*-*-*-3RD EMPLOYEE DETAILS-*-*-*-");
	printf("\n\nEnter employee name : ");
	scanf("%s", &e3.empname);
	printf("\nEnter employee no : ");
	scanf("%d", &e3.empno);
	printf("\nEnter employee age : ");
	scanf("%d", &e3.age);
	printf("\nEnter employee address : ");
	scanf("%s", &e3.address);

	printf("\n\n-*-*-*-3RD EMPLOYEE DISPLAY-*-*-*-");
	printf("\n\nEmployee name : %s",e3.empname);
	printf("\n\nEmployee no : %d",e3.empno);
	printf("\n\nEmployee age : %d",e3.age);
	printf("\n\nEmployee address : %s",e3.address);

	
	printf("\n\n\n-*-*-*-4TH EMPLOYEE DETAILS-*-*-*-");
	printf("\n\nEnter employee name : ");
	scanf("%s", &e4.empname);
	printf("\nEnter employee no : ");
	scanf("%d", &e4.empno);
	printf("\nEnter employee age : ");
	scanf("%d", &e4.age);
	printf("\nEnter employee address : ");
	scanf("%s", &e4.address);
	
	printf("\n\n-*-*-*-4TH EMPLOYEE DISPLAY-*-*-*-");
	printf("\n\nEmployee name : %s",e4.empname);
	printf("\n\nEmployee no : %d",e4.empno);
	printf("\n\nEmployee age : %d",e4.age);
	printf("\n\nEmployee address : %s",e4.address);

	
	printf("\n\n\n-*-*-*-5TH EMPLOYEE DETAILS-*-*-*-");
	printf("\n\nEnter employee name : ");
	scanf("%s", &e5.empname);
	printf("\nEnter employee no : ");
	scanf("%d", &e5.empno);
	printf("\nEnter employee age : ");
	scanf("%d", &e5.age);
	printf("\nEnter employee address : ");
	scanf("%s", &e5.address);
	
	printf("\n\n-*-*-*-5TH EMPLOYEE DISPLAY-*-*-*-");
	printf("\n\nEmployee name : %s",e5.empname);
	printf("\n\nEmployee no : %d",e5.empno);
	printf("\n\nEmployee age : %d",e5.age);
	printf("\n\nEmployee address : %s",e5.address);
}