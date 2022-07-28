#include <stdio.h>

struct student{
	char sname[10];
	int rollno;
	float per;
}s1;

void main()
{
	int size;
	printf("\n--------Enter student details---------\n");
	printf("\n\nEnter name :");
	scanf("%s",&s1.sname);
	printf("name :%s\n",s1.sname);
	
	printf("\nEnter rollno :");
	scanf("%d",&s1.rollno);
	printf("roll no :%d\n",s1.rollno);
	
	printf("\nEnter percentage :");
	scanf("%f",&s1.per);
	printf("percentage :%.2f",s1.per);
	
	
	size = sizeof(s1);
	printf("\n\nUnion size is %d bytes",size);
	
	
}