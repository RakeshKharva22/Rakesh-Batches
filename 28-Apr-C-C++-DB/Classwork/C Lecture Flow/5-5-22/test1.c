#include <stdio.h>

void main()
{
	 int a = 13, b = 67, i, j , k ,l ,m;
	 a = --b;
	 b = ++a;
	 i = b++;
	 j = --i;
	 k = ++j;
	 l = j --;
	 m = l++;
	 
	 printf("\nA=%d",a);
	 printf("\nB=%d",b);
	 printf("\nI=%d",i);
	 printf("\nJ=%d",j);
	 printf("\nK=%d",k);
	 printf("\nL=%d",l);
	 printf("\nM=%d",m); 
	 
	
}