/*

3) for loop

syntax : 

		for(initialization;condition;updation)
		{
			statement;
		}
		
desc :  provides all in one line		
*/


#include<stdio.h>

void main()
{
	int i;
	for(i = 1; i <= 10;i++)
	{
		printf("\nI = %d \t Square = %d",i,i*i);
		printf("\nI = %d \t Cube = %d",i,i*i*i);
	}
	
	
}