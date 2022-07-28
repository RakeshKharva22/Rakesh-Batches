#include<stdio.h>
void main()
{
                 int rno,Total,sub1,sub2,sub3,sub4,sub5;
                        char name[10];
                        float per;
                        printf("\n--------student info----------");
                        printf("\nEnter rno: ");
                        scanf("%d",&rno);
                        printf("Enter Name: ");
                        scanf("%s",&name);
                        printf("\nEnter Mathematics Marks: ");
                        scanf("%d",&sub1);
                        printf("\nEnter Physics Marks: ");
                        scanf("%d",&sub2);
                        printf("\nEnter Chemistry Marks: ");
                        scanf("%d",&sub3);
                        printf("\nEnter English Marks: ");
                        scanf("%d",&sub4);
                        printf("\nEnter Hindi Marks: ");
                        scanf("%d",&sub5);
                        Total=sub1+sub2+sub3+sub4+sub5;
                        per=(float)Total/5;
                        printf("\n Total %d: ",Total);
                        printf("\n percentage: %.2f ",per);
                        
                        if(per>=75)
                        { 
                                printf("\n class: Distinction");
                        }
                        else if(per>=60)
                        {
                                 printf("\n class:First Class");               
                                }        
                        else if(per>=50)
                        {
                                   printf("\n Class:Second Class");             
                                                        }          
                        else if(per>=40)
                        {
                                  printf("\n Class: Pass");
                                   }
                                  
                        else                                                  
                         {
                                    printf("\n Class:Fail");            
                        }
                        }