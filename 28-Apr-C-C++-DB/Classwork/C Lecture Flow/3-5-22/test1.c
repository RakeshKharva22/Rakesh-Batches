#include <stdio.h>

void main()
{
//int a = 10 , b = 20, c = 30;
//char name[10] = "tops";
//float per = 34.5;
//printf("A = %d,\tB = %d,\tC = %d", a, b, c);
//printf("\n%s",name);
//printf("\nPercentage = %.2f",per);

int a , b, c, sub, mul;
float div;
printf("Enter A:\t");
scanf("%d",&a); // Accept data
printf("\nEnter B:\t");
scanf("%d",&b);
printf("\nA = %d, B = %d",a, b);
c = a + b;
sub = a - b;
mul = a * b;
div = a / (float)b;
printf("\nAddition is %d",c);
printf("\nSubtraction is %d",sub);
printf("\nMultiplication is %d",mul);
printf("\nDivision is %.2f",div);

}