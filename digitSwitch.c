//This is Chapter 4 Exercise 3
//Asks for a 2-digit number, reverses the numbers.

#include <stdio.h>

int main(){

	int input, x, y;

	printf("Enter a two-digit number: ");
	scanf("%d", &input);

	x = input / 10;
	y = input % 10;

	printf("The reversal is: %d%d\n", y, x);

	return 0;

}
