#include <stdio.h>

void main()
{
	int rno,total, sub1, sub2,sub3, sub4, sub5;
	char name [10];
	float per;
	
	printf("\n--------student info-------\n");
	
	printf("\nenter rno");
	scanf("%d, & rno");
	printf("\nenter name:");
	scanf("%d, &name");
	printf("\nenter english marks");
	scanf("%d ,& sub1");
	printf("\nenter gujrati marks");
	scanf("%d, & sub2");
	printf("\nenter maths marks");
	scanf("%d, & sub3");
	printf("\nenter science marks");
	scanf("%d, & sub4");
	printf("\nenter hindi marks");
	scanf("%d, & sub5");
	
	
	total=sub1+sub2+sub3+sub4+sub5;
	per =(float)total/5;
	 
	 printf("\n--------student details-------\n");
	 printf("\nRoll no:%d",rno);
	 printf("\nname=%s", name);
	 printf("\ntotal=%d",total);
	 printf("\npercentage=%.2f",per);
	 
	 if(per >=75)
	 {
	 	printf("\nclass:distiction");
	 	
	 }
	 else if(per>=60)
	 {
	 	printf("\nclass:first class");
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
	 	printf("\nclass: fail!!");
	 	
	 }
}
	 
	 	
	

	 	
		 	
		 	


	
