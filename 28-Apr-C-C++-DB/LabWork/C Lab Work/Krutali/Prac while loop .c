#include <stdio.h>

void main()
{
	int a,c=0;
	printf("Write any number : ");
	scanf("%d",&a);
	
	while(a>0)
	{
	    a=a/10;
		c++;	
	}
	printf("number of digit : %d",c);
}