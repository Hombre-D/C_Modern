#include <stdio.h>

int main()
{
	float number, largestNumber = 0;

	printf("This program finds the largest number in a series.\n");
	

	do{
		printf("Enter a number (0 or negative to quit): ");
		scanf("%f", &number);
		if (number > largestNumber) largestNumber = number;
	}while(number > 0);

	if(largestNumber == 0) printf("You did not enter any numbers greater than zero\n");
	else printf("All numbers entered. Largest number is: %g\n", largestNumber);

	return 0;
}
