#include<stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	 for(i=0;i<n;i++)
	 {
	 	for(j=1;j<n;j++)
	 	{
	 		if(arr[j-1]>arr[j])
	 		{
	 			int temp=arr[j-1];
	 			arr[j-1]=arr[j];
	 			arr[j]=temp;
			 }
		 }
	 }
	 
	 printf("The maximum number is : %d", arr[n-1]);
}
