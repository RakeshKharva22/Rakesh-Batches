#include <stdio.h>

void print (int , int);

void main()
{
  int a =10;
  print(1 ,10);
  return 0;	
}

void print(int a ,int b)
{
	if(a>10)
	return 0;
	
    printf(" %d",a);
    print(++a ,10);

	
}