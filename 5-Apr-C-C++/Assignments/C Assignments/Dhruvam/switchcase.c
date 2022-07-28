#include<stdio.h>
void main()
{
	char ch;
	int a=30,b=20,add,sub,mul;
	float div;
	printf("\n--------choice calculator--------\n");
	printf("\n A=%d, B=%d",a,b);
	printf("\n1.add\n2.sub\n3.mul\n4.div");
	printf("\nenter your choice: ");
	scanf("%c",&ch);
	switch(ch)
	{
		case '1':add=a+b;
				printf("\naddition is %d",add);
				//break;
		case'2':sub=a-b;
				printf("\nsubtraction is %d",sub);
				//break;
		case '3':mul=a*b;
				printf("\nmultiplication is %d",mul);
				//break;
		case '4':div=a/(float)b;
				printf("\ndivision is %d",div);
				break;
		default:
				printf("\ninvalid input");
				break;
	}
}