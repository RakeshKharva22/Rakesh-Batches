#include<stdio.h>
void main()
{
	int a,b,c,d;
	
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a;c++)
		{
			if(d % 2 ==1)
			{
				printf(" 1");
			}
			else
			{
				printf(" 0");
			}
			d++;
		}
		printf("\n");
	}
}