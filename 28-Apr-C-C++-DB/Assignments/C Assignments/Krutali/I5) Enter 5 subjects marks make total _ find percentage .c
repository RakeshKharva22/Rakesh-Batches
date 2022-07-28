#include <stdio.h>

void main()
{
	int Rollno, Total, Sub1, Sub2, Sub3, Sub4, Sub5;
	char name [10];
	float per;
	printf("\n----Student Info----\n\n");
	printf("Enter Rollno : ");
	scanf("%d", &Rollno);
	printf("Enter Name : ");
	scanf("%s", &name);
	printf("Enter Physics Marks : ");
	scanf("%d", &Sub1);
	printf("Enter Chemistry Marks : ");
	scanf("%d", &Sub2);
	printf("Enter Maths Marks : ");
	scanf("%d", &Sub3);
	printf("Enter English Marks : ");
	scanf("%d", &Sub4);
	printf("Enter Computer Marks : ");
	scanf("%d", &Sub5);
	
	Total = Sub1 + Sub2 + Sub3 + Sub4 + Sub5;
	per = (float) Total / 5;
	
	printf("\n----Student Details----\n");
	printf("\nRoll no : %d", Rollno);
	printf("\nName : %s", name);
	printf("\nTotal : %d", Total);
	printf("\nPercentage : %\.2f", per);
	
	if (per > 75)
	{
		printf("\nClass : Distinction");
	}
	else if (per > 60 & per <= 75)
	{
		printf("\nClass: First class");
	}
	else if (per > 50 & per <= 60)
	{
		printf("\nClass: Second class");
	}
	else if (per > 35 & per <= 50)
	{
		printf("\nClass: Pass class");
	}
	else
	{
		printf("\nClass : Fail!!");
	}
	
}