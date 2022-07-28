#include <stdio.h>

void main()
{
	int a,i;
	printf("Enter any number : ");
	scanf("%d",&a);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",i,a,i*a);
	}
}