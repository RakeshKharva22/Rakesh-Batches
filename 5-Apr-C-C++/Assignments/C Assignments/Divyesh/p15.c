//Write a program to find whether a year entered by the user is a leap year or not. 

#include <stdio.h>
int main(){
	int year;
	printf("Enter a Year: ");
	scanf("%d", &year);
	
	if(year % 400 == 0){
		printf("%d is a Leap year", year);
	}
	else if(year % 100 == 0){
		printf("%d is not a Leap year", year);
    }
    else if(year % 4 == 0){
		printf("%d is a Leap year", year);
	}
	else {
		printf("%d is not a Leap year", year);
	} 

	return 0;

}