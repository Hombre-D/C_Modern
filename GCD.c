#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n, numerator, gcd;

	printf("Enter two integers: ");
	scanf("%d%d", &m, &n);

	if(n == 0 || m == 0){
		printf("Numbers must be greater than zero\n");
		exit(0);
	}
	
	while(n != 0){
		numerator = m % n;
		m = n;
		n = numerator;
	}

	gcd = m;

	printf("Greatest common divisor: %d\n", gcd);

	return 0;
}
