#include <stdio.h>

void main()
{
	int n, r, a=0;
	printf("Enter number : ");
	scanf("%d", &n);
	
	while(n!=0)
	{
		r=n%10;
		if (r>a)
		a=r;
		n=n/10;
		
	}
	printf("Largest digit : %d",a);
}
