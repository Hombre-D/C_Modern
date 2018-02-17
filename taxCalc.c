#include <stdio.h>

#define TAX 0.05

main()
{
	float amount, with_tax, total;

	printf("Enter a dollar amount: ");
	scanf("%f", &amount);

	with_tax = amount * TAX;
	total = amount + with_tax;

	printf("With tax added: %.2f\n", total);

	return 0;


}
