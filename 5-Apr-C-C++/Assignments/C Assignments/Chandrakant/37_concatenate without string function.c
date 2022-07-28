#include<stdio.h>
#include<string.h>
int main()
{
	
	char s1[20] = "jay", s2[20] = "pathak";
	xyz(s1, s2);
	printf("%s ", s1);
}

void xyz(char s1[], char s2[])
{
	int i,j;
	i = strlen(s1);
	for(j=0;s2[j]!='\0';j++,i++)
	{
		s1[i] = s2[j];
	}
}
