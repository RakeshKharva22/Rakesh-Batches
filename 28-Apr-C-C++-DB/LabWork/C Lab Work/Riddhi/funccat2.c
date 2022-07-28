#include<stdio.h>

void isprime(int no)
{
	int i,c=0;
	for(i=1; i<=no; i++)
	
	{
		if(no %i ==0)
		{
			c++;
		}
	}
	
	if(c==2)
	{
		printf("\n%d is prime",no);
	}
	else
	{
		printf("\n%d is not prime",no);
	}
}
void main()
{
	int a,b,prime;
	printf("\nenter no to find prime or not .");
	scanf("%d",&prime);
	isprime(prime);
	
}



	

