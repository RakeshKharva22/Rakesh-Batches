#include <stdio.h>

void main()
{
   char str1[100] = "tops",str2[100] ="tech";
   char str3[100];
   
   int i =0 ,j =0;
   
   printf("\n first string : %s",str1);
   printf("\n second string : %s ",str2);
   
   while(str1[i] != '\0')
   {
   	str3[j] = str1[i];
   	i++;
   	j++;
	}
	
	i =0;
	while(str2[i] != '\0')
	{
		str3[j] = str2[i];
		i++;
		j++;
	}
	
	str3[j] = '\0';
	
	printf("\n concatenated string : %s",str3);	
	
}