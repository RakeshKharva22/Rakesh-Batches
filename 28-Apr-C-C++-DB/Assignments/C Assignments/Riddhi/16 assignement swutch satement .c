#include <stdio.h>

void main()
{
	char ch;
	
	printf("enter \n1.m for monday \n2.t for tuesday \n3.w for wednesday \n4.h for thursday \n5.f for friday \n6.s for saturday \n7.u for sunday");
	printf("            ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'm':
		case 'M':
			printf("monday \n");
			break;
		case 't':
		case 'T':
			printf("tuesday \n");
			break;
		case 'w':
		case 'W':
			printf("wednesday \n");
			break;
		case 'h':
		case 'H':
			printf("thursday \n");
			break;
		case 'f':
		case 'F':
			printf("friday \n");
			break;
		case 's':
		case 'S':
			printf("saturday \n");
			break;
		case 'u':
		case 'U':
			printf("sunday \n");
			break;
		default :printf("Invalid Input");
                 break;
                 
		
	}
}