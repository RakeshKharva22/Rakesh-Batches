#include<stdio.h>
void main()
{

                        int a,b;
                        printf("\n Enter A: ");
                        scanf("%d",&a);
                        printf("\n Enter B: ");
                        scanf("%d",&b);
                        printf("\nBefore swap a=%d,b=%d",a,b);
                        a=a+b,
                        b=a-b;
                        a=a-b;
                        printf("\nAfter swap a=%d,b=%d\n\n",a,b);
                        
}