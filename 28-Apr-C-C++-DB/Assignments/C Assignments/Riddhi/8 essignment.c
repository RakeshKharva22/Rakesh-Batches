#include <stdio.h>

void main()
{
	int total,sub1,sub2,sub3,sub4,sub5;
	char name[10];
	float per;
	
	printf("\n-------student info--------\n");
	printf("enter name :");
	scanf("%s",&name);
	printf("enter maths marks:");
	scanf("%d",&sub1);
	printf("enter english marks:");
	scanf("%d",&sub2);
	printf("enter science marks:");
	scanf("%d",&sub3);
	printf("enter hindi marks:");
	scanf("%d",&sub4);
	printf("enter gujrati marks:");
	scanf("%d",&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	per=(float)total/5;
	
	
	printf("\n--------student details---------\n");
	printf("\nname:%s",name);
	printf("\ntotal:%d",total);
	printf("\npercentage:%.2f",per);
	
	
	if(per>=75)
	{
		printf("\nclass:distiction");
		
	}
	else if(per>=60)
	{
		printf("\nclass:fisrt class");
		
	}
	else if(per>=50)
	{
		printf("\nclass:second class");
		
	}
	else if(per>=40)
	{
		printf("\nclass:pass class");
		
	}
	else
	{
		printf("\nclass:fail!!");
		
	}
	
	
}