#include <stdio.h>

void main()
{
	int iouter,jinner;
	
	for(iouter = 0; iouter <= 5; iouter++)
	{
		if(iouter == 2)
			{
				printf("\n%d---%d",iouter,jinner);
				break;
			}
			
		for(jinner = 0; jinner <= 5; jinner++)
		{
		printf("\n%d---%d",iouter,jinner);	
		}
	
	}
	

}