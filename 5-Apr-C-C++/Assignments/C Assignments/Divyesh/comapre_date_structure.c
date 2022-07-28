//Write a structure capable of storing date. Write a function to compare those dates.

#include<stdio.h>

typedef struct date{
	int day;
	int month;
	int year;
}date;

void display(date d){
	printf("Tha Date is: %d/%d/%d\n", d.day, d.month, d.year);
}

int dateCmp(date d1, date d2){
	if(d1.year>d2.year){
		return 1;
	}
	if(d1.year<d2.year){
		return -1;
	}
	if(d1.month>d2.month){
		return 1;
	}
	if(d1.month<d2.month){
		return -1;
	}
	if(d1.day>d2.day){
		return 1;
	}
	if(d1.day<d2.day){
		return -1;
	}
	return 0;
}

int main(){
	date d1 = {18, 07, 1995};
	date d2 = {18, 03, 1999};
	
	display(d1);
	display(d2);
	
	int a = dateCmp(d1,d2);
	printf("Date comparison function returns: %d", a);
	
	return 0;
}
