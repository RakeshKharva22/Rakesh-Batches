#include <stdio.h>

void main()
{
	int i , j , k ,n=1;
	for(i =1 ;i <= 5; i++)
	{
		for(j =1 ;j <=5 -i; j++)
		{
			printf(" ");
		}
		for(k =1 ;k <= i ; k++)
		{
			printf(" %d",n);
			n++;
		}
		printf("\n");
	}
}