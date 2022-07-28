#include<stdio.h>
#include<conio.h>
void main()
{
	int i=32,j=63,c,d,e,f;
	i=++j;
	j=++i;
	c=j++;
	d=i--;
	e=c--;
	f=--e;
	printf("i=%d\n",i);
	printf("j=%d\n",j);
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	printf("e=%d\n",e);
	printf("f=%d\n",f);	
}