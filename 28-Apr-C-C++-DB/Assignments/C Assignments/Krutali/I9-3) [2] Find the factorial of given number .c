#include <stdio.h>.

void main()
{
	int a,no,fact=1;
	printf("Enter number : ");
	scanf("%d", &no);
	
	for(a=no;a>=1;a--)
	{
		fact=fact*a;
	}
	printf("\nFactorial is : %d",fact);
}