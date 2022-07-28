#include<stdio.h>
#include<conio.h>
void demostatic();

void main()
{
	demostatic();
	demostatic();
	demostatic();

	getch();	

}


void demostatic()
{
	 static int x=10;
	x=x+2;
	printf("\n X=%d",x);
}