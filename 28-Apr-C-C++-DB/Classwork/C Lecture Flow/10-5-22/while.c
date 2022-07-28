/*
1)  while loop

syntax :  while(condition)
		  {
		  	statement;
		  }
		  
desc:    While loop is called as entry controlled loop.
		 No semicolon after condition.
		 if condition false at first,then do not go inside body.
		 if condition true, then go inside body.
*/

#include<stdio.h>

void main()
{
	int incr=1;
	while(incr < 1000)
	{
		printf("\n%d",incr);
		incr++;
	}
	printf("out of loop");
}