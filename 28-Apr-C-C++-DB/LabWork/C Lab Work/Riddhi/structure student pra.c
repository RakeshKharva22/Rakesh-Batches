#include <stdio.h>

struct student{
	int rollno;
	char name[10];
	float per;
	
}s1;

void main()
{
	printf("\n---------Enter student details---------\n");
	printf("\nEnter rollno :");
	scanf("%d",&s1.rollno);
	printf("\nEnter name :");
	scanf("%s",&s1.name);
	printf("\nEnter percentage :");
	scanf("%f",&s1.per);
	
	printf("\n---------Display student details--------\n");
	printf("\nroll no = %d",s1.rollno);
	printf("\nname =%s",s1.name);
	printf("\npercentage =%.2f",s1.per);
}