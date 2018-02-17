//Prints a table of compound interest.

#include <stdio.h>

#define NUM_RATES (sizeof(value)/sizeof(value[0]))
//#define INITIAL_BALANCE 100.00

int main()
{
	int i, low_rate, num_years, year;
	float value[5];
	float initial_balance;

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);
	printf("Enter initial balance: ");
	scanf("%f", &initial_balance);

	printf("\nYears");
	for (i = 0; i < NUM_RATES; i++){
		printf("%9d%%", low_rate+i);
		value[i] = initial_balance;
	}
	printf("\n");

	for (year = 1; year <= num_years; year++){
		printf("%6d	", year);
		for (i=0; i < NUM_RATES; i++){
			value[i] += (low_rate+i) / 100.0 * value[i];
			printf("%10.2f", value[i]);
		}
	printf("\n");
	}


	return 0;
}
	
