#include <stdio.h>

struct Student{
	char sname[10];
	int rollNo;
	float per;
}s1;

struct Employee{
	int eid;
	char ename[10];
	float sal;
}e1;


void main()
{
	int size;
	printf("\n------Enter Student Details-----------\n");
	printf("\n\nEnter Name : ");
	scanf("%s",&s1.sname);
	printf("\nEnter RollNo : ");
	scanf("%d",&s1.rollNo);
	printf("\nEnter Percentage : ");
	scanf("%f",&s1.per);
	
	printf("\n------Display Student Details-----------\n");
	printf("\nName : %s",s1.sname);
	printf("\nRoll NO : %d",s1.rollNo);
	printf("\nPercentage : %.2f",s1.per);
	
	size = sizeof(e1);
	printf("\n\nStructure size is %d Bytes",size);
	
	
}