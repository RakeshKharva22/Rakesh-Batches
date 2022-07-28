#include<stdio.h>

void main()
{
	int a,b,c,n,i[5];
	
	printf("\nEnter size of array : ");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		printf("\nEnter Element [%d] = ",a);
		scanf("%d",&i[a]);
	}
	for(a=1;a<=n;a++)
	{
		for(b=a+1;b<=n;b++)
		{
			if(i[a] > i[b])
			{
			c = i[a];
			i[a] = i[b];
			i[b] = c;	
			}
		}
		
	}
	for(a=1;a<=n;a++)
	{
		printf("\nsort elements is %d",i[a]);
	}
}