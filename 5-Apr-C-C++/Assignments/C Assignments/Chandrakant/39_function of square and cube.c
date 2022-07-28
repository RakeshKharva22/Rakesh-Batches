#include<stdio.h>
int findsquare(int n)
{
	return n * n;
}

int findcube(int n)
{
	return n * n * n;
}

int main()
{
	int no;
	printf("Enter a number: ");
	scanf("%d", &no);
	
	printf("Square of %d is %d\n", no, findsquare(no));
	printf("Cube of %d is %d\n", no, findcube(no));
}
