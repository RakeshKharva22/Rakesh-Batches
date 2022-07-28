#include <stdio.h>

struct student{
	int rollno;
	float sub1marks,sub2marks,sub3marks;
}s[5];

void main()
{
	int i;
	printf("Enter information of student :\n");
	
	for(i=0;i<5;i++)
	{
		s[i].rollno =i+1;
		printf("\nEnter roll no :");
		scanf("%d",&s[i].rollno);
		printf("Enter sub1marks :");
		scanf("%f",&s[i].sub1marks);
		printf("Enter sub2marks :");
		scanf("%f",&s[i].sub2marks);
		printf("Enter sub3marks :");
		scanf("%f",&s[i].sub3marks);
	}
	
	printf("Displaying information :\n\n");
	for(i=0;i<5;i++)
	{
		printf("\nrollno :%d\n",i+1);
		printf("\nsub1marks :%.2f",s[i].sub1marks);
		printf("\nsub2marks :%.2f",s[i].sub2marks);
		printf("\nsub3marks :%.2f",s[i].sub3marks);
		printf("\n");
	}
}