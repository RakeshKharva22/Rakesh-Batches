#include <stdio.h>

 void main()
 {
 	int i ,j ,k ,n;
 	for(i =1 ;i <= 5 ; i++)
 	{
 		for(j =1 ;j <=5-i ; j++)
 		{
 			printf("");
		 }
		 for(k =1 ;k <=i ; k++)
		 {
		 	if(n % 2==1)
		 	{
		 		printf("0");
			 }
			 else
			 {
			 	printf("1");
			 }
			 n++;
			 
		 }
		 printf("\n");
 		
	 }
 }