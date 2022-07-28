//Write a program to perform addition, subtraction, multiplication and division of two numbers using Function

#include<stdio.h>

float add(float n1, float n2);
float sub(float n1, float n2);
float mul(float n1, float n2);
float div(float n1, float n2);

int main(){
	float n1, n2, res;
    printf("Enter any two number: ");
    scanf("%f %f", &n1, &n2);
    
    res = add(n1, n2);
    printf("\nAddition = %.2f", res);
    res = sub(n1, n2);
    printf("\nSubtraction = %.2f", res);
    res = mul(n1, n2);
    printf("\nMultiplication = %.2f", res);
    res = div(n1, n2);
    printf("\nDivision = %.2f", res);

	return 0;
}											

float add(float n1, float n2){
	int result;
	result= n1+n2;
	return result;
}

float sub(float n1, float n2){
	int result;
	result= n1-n2;
	return result;
}

float mul(float n1, float n2){
	int result;
	result= n1*n2;
	return result;
}

float div(float n1, float n2){
	float result;
	result= n1/n2;
	return result;
}









