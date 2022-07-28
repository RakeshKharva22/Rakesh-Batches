#include<stdio.h>
#include<conio.h>
void main()
{
	int day;
	printf("enter day:");
	scanf("%d",&day);
	
	switch(day)
	{
		case s1:printf("monday\n");
		break;
		case 2:printf("tuesday\n");
		break;
		case 3:printf("wendesday\n");
		break;
		case 4:printf("thrusday\n");
		break;
		case 5:printf("friday\n");
		break;
		case 6:printf("saturday\n");
		break;
		case 7:printf("sunday\n");
		break;
		default:
		printf("invalid number");
	}
}
