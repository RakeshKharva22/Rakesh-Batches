#include <stdio.h>

void main()
{
	int i ,j [10],max;
	printf("\n-------------enter elements----------\n");
	
	for(i =0 ;i <10 ; i++)
	{
		printf("\nenter elements [%d]",i);
		scanf("%d",& j[i]);
	}
	
	max =j [0];
	
	printf("\n-----------enter elements----------\n");
	
	for(i =0; i <10; i++ )
	{
		printf("\nelement [%d] = %d",i ,j[i]);
		
		if(max < j[i])
		{
			max = j[i];
		}
	}
	printf("\n\nmax number is %d",max);

}
