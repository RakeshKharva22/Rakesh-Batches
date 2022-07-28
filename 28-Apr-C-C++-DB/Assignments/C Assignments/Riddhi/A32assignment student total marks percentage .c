#include <stdio.h>

struct student{
	int rollno;
	char name[10];
	int totalmarks;
	int percentage;
	
}s1;
void main()
{
	printf("\n-------student details--------\n");
	printf("enter rollno :");
	scanf("%d",&s1.rollno);
	printf("enter name :");
	scanf("%s",&s1.name);
	printf("enter totalmarks :");
	scanf("%d",&s1.totalmarks);
	printf("enter percentage :");
	scanf("%d",&s1.percentage);
	
	printf("\nrollno =%d",s1.rollno);
	printf("\nname =%s",s1.name);
	printf("\ntotalmarks =%d",s1.totalmarks);
	printf("\npercentage =%d",s1.percentage);
}