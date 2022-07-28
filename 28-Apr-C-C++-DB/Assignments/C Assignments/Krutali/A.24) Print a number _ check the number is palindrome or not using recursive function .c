#include <stdio.h>

void main()
{
	int num, result, temp, length=0;
	printf("Enter an integer number : ");
	scanf("%d", &num);
	temp = num;
	while(temp != 0)
	{
		length++;
		temp = temp/10;
	}
	result = rev(num, length);
	if(num == result)
	printf("\nNumber is palindrome");
	else
	printf("\nNumber is not palindrome");
}
int rev(int num, int len)
{
	if(len == 1)
	return num;
	else
	return (((num%10) * pow(10, len-1)) + rev(num/10,--len));
}
