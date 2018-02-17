#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numerator, denominator, m, n, temp, gcd;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	if(numerator == 0 || denominator == 0){
		printf("Numbers must be greater than zero\n");
		exit(0);
	}

	m = numerator;
	n = denominator;

	while(n != 0){
		temp = m % n;
		m = n;
		n = temp;
	}

	gcd = m;

	numerator = numerator / gcd;
	denominator = denominator / gcd;

	printf("In lowest terms: %d/%d\n", numerator, denominator);

}
