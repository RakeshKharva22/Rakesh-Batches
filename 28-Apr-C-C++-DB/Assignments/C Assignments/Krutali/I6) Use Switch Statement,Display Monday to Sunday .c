#include <stdio.h>

void main()
{
	char dayno;
	
	printf("Please enter day no : ");
	scanf("%c", &dayno);
	
	switch (dayno)
	{
		case 'a' : printf("Monday");
		break;
		case 'b' : printf("Tuesday");
	    break;	
		case 'c' : printf("Wednesday");
		break;
		case 'd' : printf("Thrusday");
		break;
		case 'e' : printf("Friday");
		break;
		case 'f' : printf("Saturday");
		break;
		case 'g' : printf("Sunday");
		break;
		default : printf("Invalid Input");
	}
}