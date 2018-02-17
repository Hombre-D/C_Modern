//This is Chapter 6 Exercise 5
//Asks 

#include <stdio.h>

int main(){

	int input, x;

	printf("Enter an integer: ");
	scanf("%d", &input);

	printf("The reversal is: ");
	
	do{
		x = input % 10;
		input = input / 10;		
		printf("%d", x);

	}while(input != 0);

	printf("\n");

	return 0;

}
