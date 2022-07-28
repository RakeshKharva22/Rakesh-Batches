//String Functions- to use string function include<string.h>
/*
	1)strlen() -> Length of String 
	2)strrev() -> Reversing the String.
	3)strcat() -> Combine 2 String
	4)strcmp() -> Compare 2 String
	5)strcpy() -> Copies One String into another.
	6)strlwr() -> converts into lowercase.
	7)strupr() -> converts into uppercase.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char fname[10] = "tOPS tECH";
	char lname[10];
	//int value;
	//printf("String Length is %d",strlen(name));
	//printf("\nString Reverse is %s",strrev(name));
	//printf("%s",strcat(fname,lname));
	//value = strcmp(fname,lname);
	//printf("%d",value);
	
	//strcpy(lname,fname);
	//printf("%s",lname);
	//printf("\n Lower case : %s",strlwr(fname));
	printf("\n Upper case : %s",strupr(fname));
	
	
		
}
