#include <stdio.h>

void main()
{
	printf("\n------------enter elements--------------\n");
	int i , j [10],even=0 ,odd=0;
	
	for(i =1 ;i <=10 ; i++)
	{
		printf("\nenter array [%d] =",i);
		scanf("%d",& j[i]);
	}
	printf("\n--------elements are----------\n");
	
	for(i=1 ;i <=10 ; i++)
	{
		printf("\n\narray [%d] = %d",i ,j[i]);
		
		if(j[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		printf("\n\neven number = %d",even);
		printf("\n\nodd number = %d",odd);
	}
	
}