#include<stdio.h>
#include<conio.h>
void main()
{
  float p,r,t,si;
  clrscr();
  printf("enter the principle amount:");
  scanf("%f",&p);
  printf("enter the rate of interest:");
  scanf("%f",&r);
  printf("enter the time duration:");
  scanf("%f",&t);
  si=(p*r*t)/100;
  printf("the simple interest is % .2f",si);
  getch();
}