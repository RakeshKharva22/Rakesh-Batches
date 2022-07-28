#include <stdio.h>

struct employee{
	char name[10];
	int eid;
	float salary;
}e1;

struct student{
	char name[10];
	int srollno;
	float per;
}s1;

void main()
{
	int choice;
	printf("\n1.employee details \n2.students details");
	printf("\n Enter choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :("\nemployee details");
	
	            printf("\n--------Enter employee details-------\n\n");
            	printf("Enter name :");
	            scanf("%s",&e1.name);
	            printf("Enter eid :");
	            scanf("%d",&e1.eid);
	            printf("Enter salary :");
	            scanf("%f",&e1.salary);
	
	            printf("\n-------Display employee details-------\n\n");
	            printf("\n name = %s",e1.name);
	            printf("\n eid =%d",e1.eid);
	            
		        printf("\n salary =%.2f",e1.salary);
		        break;
    
        case 2 :("\nstudent details");
        
		
             	printf("\n---------Enter student details-------\n\n");
	            printf("Enter name :");
	            scanf("%s",&s1.name);
	            printf("Enter rollno :");
	            scanf("%d",&s1.srollno);
	            printf("Enter percentage :");
	            scanf("%f",&s1.per);
	
	            printf("\n----------Display student details--------\n\n");
	            printf("\n name = %s",s1.name);
	            printf("\n rollno =%d",s1.srollno);
	            printf("\n percentage =%.2f",s1.per);
	    default:printf("\nInvalid choice");
	            break;
        }
	
}