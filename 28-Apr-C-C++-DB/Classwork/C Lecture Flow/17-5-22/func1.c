#include <stdio.h>
void func1();		//Function Declaration.
void func2();
void addArray();

void main()
{
	int choice;
	printf("\n1.Func1 \n2.Func2\n3.Add Array");
	printf("\nEnter choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :func1();
				break;
		case 2 :func2();
				break;
		case 3 :addArray();
				break;
		default :printf("Invalid Input");
				break;
	}
	
	
}

//Function Creation/Defined
void func1()
{
	printf("\nFunction 1 Called");
}

void func2()
{
	printf("\nFunction 2 Called");
}

void addArray()
{
	int arr1[5],arr2[5],res[5];
	int i,n;
	
	printf("\n\n-------Enter Elements of 1st Array ----\n\n");
	for(i = 0;i < 5;i++)
	{
		printf("Enter A[%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n\n-------Enter Elements of 2nd Array ----\n\n");
	for(i = 0;i < 5;i++)
	{
		printf("Enter A[%d] : ",i);
		scanf("%d",&arr2[i]);
	}
	
	printf("\n\n-------Addition of 2 Arrays ----\n\n");
	for(i = 0;i < 5;i++)
	{
		res[i] = arr1[i] + arr2[i];
		printf("\nResult[%d] = %d",i,res[i]);
	}
}
