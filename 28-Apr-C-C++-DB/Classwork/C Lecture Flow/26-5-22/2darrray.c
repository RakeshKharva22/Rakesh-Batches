#include<stdio.h>

void main()
{
	
	int a[2][7];
	a[0][0] = 1;
	a[0][1] = 22;
	a[0][2] = 32;
	a[0][3] = 52;
	a[0][4] = 26;
	a[0][5] = 72;
	a[0][6] = 52;
	
	a[1][0] = 21;
	a[1][1] = 62;
	a[1][2] = 72;
	a[1][3] = 82;
	a[1][4] = 52;
	a[1][5] = 62;
	a[1][6] = 72;
	printf("\n  1dim\n");
	printf("%d",a[0][0]);
	printf("%d",a[0][1]);
	printf("%d",a[0][2]);
	printf("%d",a[0][3]);
	printf("%d",a[0][4]);
	printf("%d",a[0][5]);
	printf("%d",a[0][6]);
	printf("\n  2dim\n");
	printf("%d",a[1][0]);
	printf("%d",a[1][1]);
	printf("%d",a[1][2]);
	printf("%d",a[1][3]);
	printf("%d",a[1][4]);
	printf("%d",a[1][5]);
	printf("%d",a[1][6]);


	
}