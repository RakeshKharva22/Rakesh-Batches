//Make a structure to store Bank Account information of a customer of ABC Bank. Also make an alias of it.

#include<stdio.h>

typedef struct BankAccount{
	int accountNo;
	char name[100];
} acc;

int main(){
	acc acc1 = {12345, "Divyesh"};
	acc acc2 = {12346, "Bhavik"};
	acc acc3 = {12347, "Utsav"};
	
	printf("Acc no = %d\n",acc1.accountNo);
	printf("Name = %s\n",acc1.name);

	return 0;
}
