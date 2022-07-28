#include<stdio.h>
void main()
{
	float p,r,n,SI;
	printf("Enter p:");
	scanf("%f",&p);
	printf("Enter r:");
	scanf("%f",&r);
	printf("Enter n:");
	scanf("%f",&n);
	SI=p*r*n/100;
	printf("Simple Interest is %.2f",SI);
}