#include <stdio.h>

void main()
{
	int i,j,t;
	
	for (i=2;i<=50;i++)
	{
		printf("\ntable of %d\n",i);
		for(j=1;j<=10;j++)
		{
			t=i * j;
			printf("\n%d X %d =%d",i,j,t);
		}
		printf("\n--------------------------\n");
	}
}