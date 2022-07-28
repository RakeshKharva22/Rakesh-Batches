#include<stdio.h>
main()
{
	int choice;
	int atmPIN;
	int number;
	
	int sub1,sub2,sub3;
	
	float percentage,Totalmarks;
	
	printf("Enter your Choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter your Pin: ");
			scanf("%d",&atmPIN);
	
			if(atmPIN==1234)
			{
				printf("Welcome USER...!\n");
			}
			else
			{
				printf("Invalid PIN....!\n");	
			}
		break;
		
		case 2:
			
			printf("Enter any integer number : ");
			scanf("%d",&number);
		
					if(number%2==0)
					{
						printf("EVEN  number ...!\n");
					}
					
					else
					{
						printf("ODD  number...!\n");
					}
					
					if(number>0)
					{
						printf("+ve number ...!\n");
					}
					
					else
					{
						printf("-ve number...!\n");
					}	
			
		break;
		
		case 3:
			
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
						
		break;
	}
}