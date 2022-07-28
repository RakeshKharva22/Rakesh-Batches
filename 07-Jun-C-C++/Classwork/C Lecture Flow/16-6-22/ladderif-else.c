#include <stdio.h>

void main()
{
	char name[10];
	int rollno,s1,s2,s3,total;
	float per;
	printf("\n- <-------Accept Student Detail----------->-\n");
	printf("\nEnter Roll NO. : ");
	scanf("%d",&rollno);
	printf("Enter Name : ");
	scanf("%s",&name);
	printf("Enter Physics Marks : ");
	scanf("%d",&s1);
	printf("Enter Chemistry Marks : ");
	scanf("%d",&s2);
	printf("Enter Maths Marks : ");
	scanf("%d",&s3);
	total = s1+s2+s3;
	per = (float)total/3; 
	printf("\nTotal PCM Marks : %d",total);
	printf("\nPercentage is %.2f",per);
	
		
}


