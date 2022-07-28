#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,add,sub,mul;
float div;
clrscr();
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("%d\n",add);
printf("%d\n",sub);
printf("%d\n",mul);
printf("%d\n",div);
getch();
}