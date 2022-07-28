#include <stdio.h>

void func1();
void func2();
void Addarray();

void main()
{
	int choice ;
	printf("\n1.func1 \n2.func2 \n3.addarray");
	printf("\nEnter choice  :");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:func1();
		       break;
	    case 2:func2();
	           break;
	    case 3:Addarray();
	           break;
	    default:printf("Invalid Input");
	            break;
		
	}
}


// function creation /defined

void func1()
{
	printf("\n function 1 called");
}

void func2()
{
	printf("\n function 2 called");
}

void Addarray()
{
	int arr1[5] ,arr2[5] ,res[5];
	int i,n;
	
	printf("\n\n-----Enter Elements of 1st Array-------\n\n");
	
	for(i =0;i <5;i++)
	{
		printf("Enter A[%d]  :",i);
		scanf("%d",& arr1[i]);
	}
	
	printf("\n\n-----Enter Elements of 2nd Array------\n\n");
	
	for (i =0;i< 5;i++)
	{
		printf("Enter A [%d]  :",i);
		scanf("%d",& arr2[i]);
	}
	
	printf("\n\n-----Addition of 2Arrays------\n\n");
	
	for(i =0;i< 5;i++)
	{
		res[i]= arr1[i] + arr2[i];
		printf("\n result[%d] =%d", res[i]);
	}
	
}