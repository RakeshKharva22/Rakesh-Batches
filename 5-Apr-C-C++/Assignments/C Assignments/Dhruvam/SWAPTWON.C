#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter value for a & b:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping the values of a & b: %d\t%d",a,b);
getch();
}