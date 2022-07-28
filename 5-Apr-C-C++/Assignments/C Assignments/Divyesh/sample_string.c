//

#include<stdio.h>
#include<string.h>

int main(){
	char st1[45] = "Divyesh";
	char *st2 = "Divs";
	int val = strcmp(st1, st2);
	printf("The value is %d", val);

	return 0;
}
