#include <stdio.h>

void main()
{
	int a[10],i,even=0,odd=0;
	for(i=0;i<10;i++)
	{
		printf("\nEnter number : ");
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++)
	{
		if (a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("\nTotal even = %d & Total odd = %d",even,odd);
}