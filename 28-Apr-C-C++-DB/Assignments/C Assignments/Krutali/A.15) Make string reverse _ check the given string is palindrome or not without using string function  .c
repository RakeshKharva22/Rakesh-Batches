#include <stdio.h>
#include <string.h>

void main()
{
	char inputstring [100];
	int leftindex, rightindex, length=0;
	printf("Enter a string for palimdrome check : \n");
	scanf("%s", &inputstring);
	
	while(inputstring[length] != '\0')
	length++;
	
	if(length < 1)
	return 1;
	
	leftindex = 0;
	rightindex = length-1;
	
	while(leftindex<rightindex)
	{
		if(inputstring[leftindex] != inputstring[rightindex])
		{
			printf("%s is not a palindrome \n", inputstring);
			return 0;
		}
		leftindex++;
		rightindex--;
	}
	printf("%s is a palindrome\n", inputstring);
	return 0;
}