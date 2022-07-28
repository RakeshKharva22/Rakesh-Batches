#include <stdio.h>

void main()
{
	int n, a[10], i, sum=0;
	float avg;
	printf("Enter size of one array : ");
	scanf("%d", &n);
	
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
		avg = sum/n;
		printf("\nsum = %d",sum);
		printf("\nAverages = %.2f",avg);
	}
}