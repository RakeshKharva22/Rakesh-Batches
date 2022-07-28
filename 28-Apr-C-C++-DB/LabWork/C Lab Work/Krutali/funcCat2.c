#include<stdio.h>

void isPrime(int no)
{
	int i,c = 0;
	
	for(i = 1; i<=no; i++)
	{
		if(no % i == 0)
		{
			c++;
		}
	}
	
	if(c == 2)
	{
		printf("\n%d is Prime",no);
	}
	else
	{
		printf("\n%d is Not Prime",no);
	}
	
}


void main()
{
	int prime;
	printf("\nEnter No to find Prime or Not.");
	scanf("%d",&prime1);
	isPrime(prime1);
}