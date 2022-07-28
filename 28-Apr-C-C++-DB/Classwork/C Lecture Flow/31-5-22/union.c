#include <stdio.h>

union Student{
	char sname[10];
	int rollNo;
	float per;
}s1;


void main()
{
	int size;
	printf("\n------Enter Student Details-----------\n");
	printf("\n\nEnter Name : ");
	scanf("%s",&s1.sname);
	printf("Name : %s\n",s1.sname);
	
	printf("\nEnter RollNo : ");
	scanf("%d",&s1.rollNo);
	printf("\nRoll NO : %d\n",s1.rollNo);
	
	printf("\n\nEnter Percentage : ");
	scanf("%f",&s1.per);
	printf("\nPercentage : %.2f",s1.per);
	

	size = sizeof(s1);
	printf("\n\nUnion size is %d Bytes",size);

	
}