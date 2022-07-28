#include<stdio.h>
int main()
{
	
	int arr[50], n, i, j=0, sml1, sml2;
	printf("Input the size of array : \n");
	scanf("%d", &n);
	
	printf("Input %d elements in the array : \n", n);
	
	for(i<0;i<n;i++)
	{
		printf("element-%d : ", i);
		scanf("%d", &arr[i]);
	}
	sml1=arr[0];
	for(i=0;i<n;i++)
	{
		if(sml1>arr[i])
		{
			sml1=arr[i];
			j = i;
		}
	}
	sml2=50;
	for(i=0;i<n;i++)
	{
		if(i==j)
		{
			i++;
			i--;
		}
		else
		{
			if(sml2>arr[i])
			{
				sml2=arr[i];
			}
		}
	}
	
	printf("The second smallest number in the array is : %d \n\n", sml2);
}
