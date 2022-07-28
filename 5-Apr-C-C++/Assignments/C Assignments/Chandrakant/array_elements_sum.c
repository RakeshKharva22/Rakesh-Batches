#include<stdio.h>
int main()
{
	int a[10], c=0, i;
	for(i=0;i<3;i++)
	{
		scanf("%d\n", &a[i]);
	}
	
	for(i=0;i<3;i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0;i<3;i++)
	{
		c = c+a[i];
	}
	
	printf("sum of elements of array = %d\n", c);
}
