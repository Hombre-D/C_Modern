//Checks numbers for repeated digits

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
		printf("Repeated digits: ");		
		for(i=0; i<N; i++){
			if(digit_seen[i] > 1) printf(" %d", i);
		}
		printf("\n\n");
	}
	else printf("No repeated digits.\n");
	
	return 0;
}
	
