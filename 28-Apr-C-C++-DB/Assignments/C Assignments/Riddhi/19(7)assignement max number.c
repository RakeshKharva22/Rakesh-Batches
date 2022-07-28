#include <stdio.h>

void main()
{
	int i, a[5] ,max=0;
	
	printf("Enter five value :");
	
	for (i=1 ;i <= 4; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i =0 ;i <=4; i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	
	printf("maximum is :%d\n",max);
}