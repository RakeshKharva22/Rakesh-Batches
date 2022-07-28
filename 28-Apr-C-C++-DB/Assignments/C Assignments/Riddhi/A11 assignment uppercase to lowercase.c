#include <stdio.h>

void main()
{
	int i, length =0;
	char string[] = "TutORial";
	length =sizeof(string)/sizeof(string[0]);
	
	for(i =0; i<length; i++)
	{
		if(isupper(string[i]))
		{
			string[i] = tolower(string[i]);
		}
		else if(islower(string[i]))
		{
			string[i] =toupper(string[i]);
		}
	}
	printf("final string after conversion : %s",string);
}