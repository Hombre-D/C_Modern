/*Checks numbers for repeated digits.*/
/*Prints a table of the number and how many times it appears.*/
/* Chapter 8, exercise 2.*/

#include <stdio.h>

#define N 10

int main()
{
	int digit_seen[N] = {0};
	int digit, i, x=0;
	long int n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n>0) {
		digit = n % 10;
		digit_seen[digit] += 1;
		if (digit_seen[digit] > 1) x = 1;
		n /= 10;
	}

	if(x == 1){
		for(i=0; i<10; i++) printf("%3d", i);
		printf("\n");
		for(i=0; i<10; i++) printf("%3d", digit_seen[i]);
		printf("\n\n");
	}
	else printf("No repeated digits.\n");
	
	return 0;
}
	
