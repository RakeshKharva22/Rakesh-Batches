#include<stdio.h>

void  main()
{
	int n1, n2;
	printf("Enter Value of A  &  B  :\t");
	scanf("%d%d",&n1,&n2);
	if(n2 > 0)
	{	
		printf("Addition = %d\n",n1+n2);
		printf("Subtraction = %d",n1-n2);
		printf("\nMultiplication = %d",n1*n2);
		printf("\nDivision = %f",n1/(float)n2);
	}
	else
	{
		printf("Please Enter Value Greater than 0");	
	}	
	
	
	
}