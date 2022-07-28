#include <stdio.h>
struct Address{
	char city[10];
	char pcode[10];
	char landmark[10];
};

struct Employee{
	int eid;
	char ename[10];
	float esal;
	struct Address a1;
};

void main(){
	struct Address a1;
	printf("Enter City");
	gets(a1.city);
	printf("Enter Pin code");
	gets(a1.pcode);
	
	puts(a1.city);
	puts(a1.pcode);
}