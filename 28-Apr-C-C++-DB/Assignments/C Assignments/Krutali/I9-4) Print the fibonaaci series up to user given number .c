#include <stdio.h>

void main()
{
	int n, a=0, b=1, c, i;
	printf("\nEnter number of term...");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d\n", a);
		c=a+b;
		a=b;
		b=c;
	}
}