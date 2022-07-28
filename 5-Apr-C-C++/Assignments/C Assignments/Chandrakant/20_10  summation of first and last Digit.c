#include<stdio.h>
int main()
{
	int n, sum=0, fd, ld;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	ld = n%10;
	
	while(n>=10)
	{
		n= n/10;
	}
	fd= n;
	
	sum= fd+ld;
	printf("Sum of fd and ld = %d", sum);
	
	return 0;
}
