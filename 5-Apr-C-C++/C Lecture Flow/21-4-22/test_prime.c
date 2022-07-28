#include<stdio.h>
main()
{
	int n,c,i,j;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	
	for(i=2;i<=n;i++)
	{
		c=0;
		for(j=1;j<=n;j++)
		{
			if(i%2==0)
			{
				c++;
			}
			
		}
		if(c==0)
		{
			printf("%d ",i);
		}
		
	
	}
		
 
}