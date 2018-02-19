/*Checks numbers for repeated digits.*/
/*Prints a table of the number and how many times it appears.*/
/* Chapter 8, exercise 2.*/

#include <stdio.h>

#define N 10

int main()
{
	
	int digit, i;
	long int n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0){
		int digit_seen[N] = {0};
		while (n>0) {
			digit = n % 10;
			digit_seen[digit] += 1;
			n /= 10;
		}

		for(i=0; i<10; i++) printf("%3d", i);
		printf("\n");
		for(i=0; i<10; i++) printf("%3d", digit_seen[i]);
		printf("\n\n");


	
		printf("Enter a number: ");
		scanf("%ld", &n);

	}
	return 0;
}
	
