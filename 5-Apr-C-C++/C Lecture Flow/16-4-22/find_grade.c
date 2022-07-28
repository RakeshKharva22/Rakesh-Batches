#include<stdio.h>
main()
{
	int sub1,sub2,sub3;
	
	float percentage,Totalmarks;
	
	printf("Enter the marks of Subject 1: ");
	scanf("%d",&sub1);
	
	printf("Enter the marks of Subject 2: ");
	scanf("%d",&sub2);
	
	printf("Enter the marks of Subject 3: ");
	scanf("%d",&sub3);
	
	Totalmarks = sub1+sub2+sub3;
	
	printf("Total marks = %.f\n",Totalmarks);
	
	percentage = Totalmarks/3;
	
	printf("Percentage= %f\n",percentage);
	
	if(percentage>=90)
	{
		printf("Grade A...!\n");
	}
	
	else if(percentage>=80)
	{
		printf("Grade B...!\n");
	}
	
	else if(percentage>=70)
	{
		printf("Grade C...!\n");
	}
	else if(percentage>=60)
	{
		printf("Grade D...!\n");
	}
	
	else if(percentage>=50)
	{
		printf("Grade E...!\n");
	}
	else
	{
		printf("FAIL..!\n");
	}
}