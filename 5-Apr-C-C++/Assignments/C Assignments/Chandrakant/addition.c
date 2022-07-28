#include<stdio.h>
int main()
{
	int a, b, add, sub, multi;
	printf("Enter The First Number: \n", a);
	scanf("%d", &a);
	printf("Enter The Second Number: \n", b);
	scanf("%d", &b);
	add=a+b;
	sub=a-b;
	multi=a*b;
	printf("add: %d\n",add);
	printf("sub: %d\n",sub);
	printf("multi: %d\n",multi);
	return 0;
}
