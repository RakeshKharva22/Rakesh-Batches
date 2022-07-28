#include <stdio.h>

void func1();
void func2();
void Addarray();
void subarray();
void mularray();
void divarray();

void main()
{
	int choice;
	
	
	printf("\n1.func1 \n2.func2 \n3.addarray \n4.subarray \n5.mularray \n6.divarray");
	printf("\nEnter choice  :");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:func1();
		       break;
	    case 2:func2();
	           break;
	    case 3:addarray();
	           break;
	    case 4:subarray();
	           break;
	    case 5:mularray();
	           break;
	    case 6:divarray();
	           break;
	    default:printf("Invalid Input");
	            break;
	}
	
}

void func1()
{
	printf("\n function 1 called");
}

void func2()
{
	printf("\n function 2 called");
}

void addarray()
{
	int arr1[5] ,arr2[5] ,res[5];
	int i,n;
	
	printf("\n\n-----Enter Elements of 1st Array------\n\n");
	
	for(i =0;i< 5;i++)
	{
		printf("Enter A [%d] :",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n\n----Enter Elements of 2nd Array------\n\n");
	
	for(i =0;i <5;i++)
	{
		printf("Enter A [%d]  :",i);
		scanf("%d",&arr2[i]);
	}
	
	printf("\n\n-----Addition of 2Arrays------\n\n");
	
	for(i =0;i <5;i++)
	{
			res[i] =arr1[i] + arr2[i];
			printf("\nresult[%d] =%d", i,res[i]);
	}
	
	printf("\n\n-----subtraction of 2 Arrays-----\n\n");
	
	for(i =0;i <5;i++)
	{
		res[i] =arr1[i] - arr2[i];
		printf("\nresult[%d] =%d", i, res[i]);
	}
	
	printf("\n\n------multiplication of 2 Arrays------\n\n");
	
	
	for(i =0;i <5; i++)
	{
		res[i] =arr1[i] * arr2[i];
		printf("\nresult[%d] =%d",i ,res[i]);
	}
	
	printf("\n\n------division of 2 Arrays------\n\n");
	 for(i =0; i<5 ;i++)
	 {
	 	res[i] =arr1[i] /  arr2[i];
	 	printf("\n result[%d] = %d",i ,res[i]);
	 }
	
	
}