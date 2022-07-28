#include<stdio.h>
#include<conio.h>
void main()
{
int s,b,m,h,g,total;
float per;
clrscr();
printf("enter marks of science:");
scanf("%d",&s);
printf("enter marks of biology:");
scanf("%d",&b);
printf("enter marks of maths:");
scanf("%d",&m);
printf("enter marks of hindi:");
scanf("%d",&h);
printf("enter marks of gujarati:");
scanf("%d",&g);
total=s+s+m+h+g;
printf("total marks%d",total);
per=total/5;
printf("\n percentage=%.2f",per);
getch();
}
