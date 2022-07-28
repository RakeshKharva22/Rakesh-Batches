#include<stdio.h>
#include<conio.h>
void main()
{
	int outer,inner,table;
	for(outer=2;outer<=7;outer++)
	{
		for(inner=1;inner<=10;inner++)
		{
			table=outer*inner;
			printf("%dx%d=%d\n",outer,inner,table);
		}
		printf("\n");
	}
}

