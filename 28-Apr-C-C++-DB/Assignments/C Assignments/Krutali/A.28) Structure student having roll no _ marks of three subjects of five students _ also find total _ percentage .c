#include <stdio.h>

struct{
	char name[50];
	int rollno;
	int sub1_mark;
	int sub2_mark;
	int sub3_mark;
	float per;
}s1;

struct{
	char name[50];
	int rollno;
	int sub1_mark;
	int sub2_mark;
	int sub3_mark;
	float per;
}s2;

struct{
	char name[50];
	int rollno;
	int sub1_mark;
	int sub2_mark;
	int sub3_mark;
	float per;
}s3;

struct{
	char name[50];
	int rollno;
	int sub1_mark;
	int sub2_mark;
	int sub3_mark;
	float per;
}s4;

struct{
	char name[50];
	int rollno;
	int sub1_mark;
	int sub2_mark;
	int sub3_mark;
	float per;
}s5;

void main()
{
    int percentage, total;
	
	printf("----1st Student detail----\n");
	printf("\nEnter student name : ");
	scanf("%s", &s1.name);
	printf("Enter student roll no : ");
	scanf("%d", &s1.rollno);
	printf("Enter sub1 mark : ");
	scanf("%d", &s1.sub1_mark);
	printf("Enter sub2 mark : ");
	scanf("%d", &s1.sub2_mark);
	printf("Enter sub3 mark : ");
	scanf("%d", &s1.sub3_mark);
	
	total = s1.sub1_mark + s1.sub2_mark + s1.sub3_mark;
	s1.per = total/(float)3;
		
	printf("\n\n------Display 1st student record-------\n");
	
	printf("\nName : %s", s1.name);
	printf("\nRoll no : %d", s1.rollno);
	printf("\nSub1 mark: %d",s1.sub1_mark);
	printf("\nSub2 mark: %d",s1.sub2_mark);
	printf("\nSub3 mark: %d",s1.sub3_mark);
	printf("\nTotal : %d", total);
	printf("\nPercentage : %.2f", s1.per);
		
	printf("\n\n----2nd Student detail----\n");
	printf("\nEnter student name : ");
	scanf("%s", &s2.name);
	printf("Enter student roll no : ");
	scanf("%d", &s2.rollno);
	printf("Enter sub1 mark : ");
	scanf("%d", &s2.sub1_mark);
	printf("Enter sub2 mark : ");
	scanf("%d", &s2.sub2_mark);
	printf("Enter sub3 mark : ");
	scanf("%d", &s2.sub3_mark);
	
	total = s2.sub1_mark + s2.sub2_mark + s2.sub3_mark;
	s2.per = total/(float)3;
		
	printf("\n\n------Display 2nd student record-------\n");
	
	printf("\nName : %s", s2.name);
	printf("\nRoll no : %d", s2.rollno);
	printf("\nSub1 mark: %d",s2.sub1_mark);
	printf("\nSub2 mark: %d",s2.sub2_mark);
	printf("\nSub3 mark: %d",s2.sub3_mark);
	printf("\nTotal : %d", total);
	printf("\nPercentage : %.2f", s2.per);
	
	printf("\n\n----3rd Student detail----\n");
	printf("\nEnter student name : ");
	scanf("%s", &s3.name);
	printf("Enter student roll no : ");
	scanf("%d", &s3.rollno);
	printf("Enter sub1 mark : ");
	scanf("%d", &s3.sub1_mark);
	printf("Enter sub2 mark : ");
	scanf("%d", &s3.sub2_mark);
	printf("Enter sub3 mark : ");
	scanf("%d", &s3.sub3_mark);
	
	total = s3.sub1_mark + s3.sub2_mark + s3.sub3_mark;
	s3.per = total/(float)3;
		
	printf("\n\n------Display 3rd student record-------\n");
	
	printf("\nName : %s", s3.name);
	printf("\nRoll no : %d", s3.rollno);
	printf("\nSub1 mark: %d",s3.sub1_mark);
	printf("\nSub2 mark: %d",s3.sub2_mark);
	printf("\nSub3 mark: %d",s3.sub3_mark);
	printf("\nTotal : %d", total);
	printf("\nPercentage : %.2f", s3.per);
	
	printf("\n\n----4th Student detail----\n");
	printf("\nEnter student name : ");
	scanf("%s", &s4.name);
	printf("Enter student roll no : ");
	scanf("%d", &s4.rollno);
	printf("Enter sub1 mark : ");
	scanf("%d", &s4.sub1_mark);
	printf("Enter sub2 mark : ");
	scanf("%d", &s4.sub2_mark);
	printf("Enter sub3 mark : ");
	scanf("%d", &s4.sub3_mark);
	
	total = s4.sub1_mark + s4.sub2_mark + s4.sub3_mark;
	s4.per = total/(float)3;
		
	printf("\n\n------Display 4th student record-------\n");
	
	printf("\nName : %s", s4.name);
	printf("\nRoll no : %d", s4.rollno);
	printf("\nSub1 mark: %d",s4.sub1_mark);
	printf("\nSub2 mark: %d",s4.sub2_mark);
	printf("\nSub3 mark: %d",s4.sub3_mark);
	printf("\nTotal : %d", total);
	printf("\nPercentage : %.2f", s4.per);
	
		printf("\n\n----5th Student detail----\n");
	printf("\nEnter student name : ");
	scanf("%s", &s5.name);
	printf("Enter student roll no : ");
	scanf("%d", &s5.rollno);
	printf("Enter sub1 mark : ");
	scanf("%d", &s5.sub1_mark);
	printf("Enter sub2 mark : ");
	scanf("%d", &s5.sub2_mark);
	printf("Enter sub3 mark : ");
	scanf("%d", &s5.sub3_mark);
	
	total = s5.sub1_mark + s5.sub2_mark + s5.sub3_mark;
	s5.per = total/(float)3;
		
	printf("\n\n------Display 5th student record-------\n");
	
	printf("\nName : %s", s5.name);
	printf("\nRoll no : %d", s5.rollno);
	printf("\nSub1 mark: %d",s5.sub1_mark);
	printf("\nSub2 mark: %d",s5.sub2_mark);
	printf("\nSub3 mark: %d",s5.sub3_mark);
	printf("\nTotal : %d", total);
	printf("\nPercentage : %.2f", s5.per);
}