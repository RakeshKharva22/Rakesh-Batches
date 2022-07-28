
// Objective : Demonstrate Register class
//Scope,Lifetime,Address
//Cannot print Address of Register variable
//Compile time error

#include<stdio.h>
#include<conio.h>

void main()
{
	register int x=10;
	printf("\n Value of x =%d \n",&x);
	//printf("Address of x is %u\n",&x); // gives error cannot use & with register.

	

  getch();
}


