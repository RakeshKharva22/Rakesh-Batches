#include <stdio.h>

struct employee{
	int eid;
	char name[10];
	float sal;
	
}e1;


void main()
{
   printf("\n--------employee details--------\n\n");
   printf("Enter id :");
   scanf("%d",&e1.eid);
   printf("Enter name :");
   scanf("%s",&e1.name);
   printf("Enter salary :");
   scanf("%f",&e1.sal);
   
   printf("\n-----------Display----------\n\n");
   printf("\neid = %d",e1.eid);
   printf("\nename =%s",e1.name);
   printf("\nsalary =%f",e1.sal);	
}