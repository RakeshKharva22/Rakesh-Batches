#include<stdio.h>
int main()
{
	int i, num;
	int total=0, average; //float total=0.0
	
	printf("Enter the value of N\n");
	scanf("%d", &num);
	int array[num];
	
	printf("Enter the numbers\n", num);
	
	
	for(i=0;i<num;i++)
	{
		scanf("%d", &array[i]);
	}
	
	printf("Input array elements \n");
	
	for(i=0;i<num;i++)
	{
		printf("%d\n", array[i]);
	}
	
	for(i=0;i<num;i++)
	{
		total+=array[i];
	}
	
	average = total/num;
	
	printf("Sum of all numbers = %d\n", total);//%.2f--- for float numbers
	printf("Avarage of all numbers = %d\n", average);
	
}
