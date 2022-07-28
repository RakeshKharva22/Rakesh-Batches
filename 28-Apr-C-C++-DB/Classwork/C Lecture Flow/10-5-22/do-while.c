/*
2) do..while

syntax : 
		initialization;
		do
		{
			statement;
			updation;
		}
		while(condition);
		
desc:   Semicolon after condition.
		it is called as Exit Controlled Loop.
		it executes body atleast once, even if my condition is false.

*/

#include<stdio.h>

void main()
{
	int i=1;
	
	do
	{
		printf("\n%d",i);
		i++;
	}while(i <= 10);
}