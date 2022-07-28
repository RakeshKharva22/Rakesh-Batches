#include<stdio.h>
#include<conio.h>
void main()
{
    char name [20];
    char address[60];
    int mobileno;
    clrscr();
    printf("enter your name:");
    scanf("%s",&name);
    printf("enter your address:");
    scanf("%s",&address);
    printf("enter your mobile no:");
    scanf("%d",&mobileno);
    printf("\n you name is %s",name);
    printf("\n you address is %s",address);
    printf("\n you contact no is %d",mobileno);
    getch();
}