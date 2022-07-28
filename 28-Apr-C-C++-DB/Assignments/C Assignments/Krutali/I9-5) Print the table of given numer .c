#include <stdio.h>

void main()
{
	int n,i;
	printf("\nEnter any number = ");
	scanf("%d", &n);
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d\n",n,i, n*i);
	}
}