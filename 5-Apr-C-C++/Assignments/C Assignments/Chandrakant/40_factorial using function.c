#include<stdio.h>

int fact(int);

main()
{
	int no, factorial;
	
	printf("Enter a number: ");
	scanf("%d", &no);
	factorial = fact(no);
	printf("Factorial of the num(%d): %d\n", no, factorial);
}

int fact(int n)
{
	int i, f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}