#include<stdio.h>
void main()
{
                        int rno,Total,sub1,sub2,sub3,sub4,sub5,sub6;
                        char name[10];
                        float per;
                        printf("\n--------student info----------");
                        printf("\nEnter rno: ");
                        scanf("%d",&rno);
                        printf("Enter Name: ");
                        scanf("%s",&name);
                        printf("\nEnter Mathematics Marks: ");
                        scanf("%d",&sub1);
                        printf("\nEnter Science Marks: ");
                        scanf("%d",&sub2);
                        printf("\nEnter Social Science Marks: ");
                        scanf("%d",&sub3);
                        printf("\nEnter English Marks: ");
                        scanf("%d",&sub4);
                        printf("\nEnter Hindi Marks: ");
                        scanf("%d",&sub5);
                        printf("\nEnter Computer Science Marks: ");
                        scanf("%d",&sub6);
                        Total=sub1+sub2+sub3+sub4+sub5+sub6;
                        per=(float)Total/6;
                        printf("\n Total %d: ",Total);
                        printf("\n percentage: %.2f ",per);
                        
                        
                        
                        
}