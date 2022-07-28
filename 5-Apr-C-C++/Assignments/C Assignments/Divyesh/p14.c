//To check age limit for driving a car

#include <stdio.h>
int main(){
	int age;
	printf("Enter your Age: ");
	scanf("%d", &age);
	
	if (age<=70 && age>=18){
		printf("You can Drive \n");
		}
		else{
			printf("You cannot Drive \n");
			}

	return 0;
}
