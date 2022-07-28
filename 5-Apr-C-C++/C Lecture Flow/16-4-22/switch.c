#include<stdio.h>
main()
{
	int x;
	
	printf("Enter any value: ");
	scanf("%d",&x);
	
	switch(x) // here we need to check variable and case value must 
				//match in order to run code in respective cases
	{
		case 1: printf("Hello 1");
		break;
		case 2: printf("Hello 2");
		break;
		case 3: printf("Hello 3");
		break;
		case 4: printf("Hello 4");
		break;
		case 5: printf("Hello 5");
		break;
		
		default:
		printf("Invalid input...!");
		
	}
}