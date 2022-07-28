#include <stdio.h>

void main()
{
	int num ,i ,tab;
	printf("Enter the number  :");
	scanf("%d",&num);
	printf("\ntable of %d is :",num);
	
	for (i =1;i <=10; i++)
	{
		tab =num * i;
		printf("\n%d * %2d =%2d",num ,i ,tab);
		
	}
	
}