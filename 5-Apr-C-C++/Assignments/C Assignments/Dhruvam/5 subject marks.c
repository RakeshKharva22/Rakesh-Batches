#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	printf("enter marks:");
	scanf("%d",&marks);
	if(marks>80)
	{
		printf("distinction");
	}
	else if(marks>70)
	{
		printf("first class");
	}
	else if(marks>60)
	{
		printf("second class");
	}	
	else if(marks>40)
	{
		printf("pass class");
	}
	else
	{
		printf("fail");
	}
}