#include <stdio.h>

void main()
{
	printf("Enter your numbers : ");
	int n=0;
	scanf("%d", &n);
	
	int min=n, max=n;
	for(int i=1;i<=9;i++)
	{
		scanf("%d", &n);
		min = (n<min) ? n : min;
		max = (n>max) ? n : max;
	}
	printf("min = %d, max = %d",min,max);
}