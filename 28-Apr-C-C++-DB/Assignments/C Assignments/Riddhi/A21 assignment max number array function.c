#include <stdio.h>



void main()
{
    int a[5] ={10,5,45,12,19};
    int n=5,m;
    int t,i;
    m=max(a,n);
    printf("\n maximum number is %d",m);
	for(i=0;i<5;i++)
	{
		max(a[i]);
	}
}

max(int n)
{
	printf("\t%d",n);
}
