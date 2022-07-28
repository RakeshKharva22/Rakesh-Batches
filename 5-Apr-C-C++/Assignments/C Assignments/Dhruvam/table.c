#include<stdio.h>
#include<conio.h>
void main()
{
	int i,table,n;
	printf("\n enter value:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("%dx%d=%d\n",n,i,table);
	}
}