#include<stdio.h>
int main()
{
	int S1, S2, S3, S4, S5, Sum, Total = 500;
	float Per;
	
	printf("Enter the marks of 5 subject : \n");
	scanf("%d %d %d %d %d", &S1, &S2, &S3, &S4, &S5);
	
	Sum = S1+S2+S3+S4+S5;
	printf("Sum : %d\n", Sum);
	
	Per = (Sum*100)/Total;
	printf("Percentage : %f\n", Per);
	return 0;
}
