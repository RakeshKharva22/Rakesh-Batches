#include<stdio.h>
int main()
{
	int num, reminder, largest=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	while(num>0)
	{
		reminder = num%10;

		if(largest<reminder)
		{
			largest=reminder;
		}
		num= num/10;
	}
	
	printf("The largest digit is: %d", largest);
	return 0;
}
