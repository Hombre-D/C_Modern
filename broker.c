#include <stdio.h>

main()
{
	int number_shares;	
	float commission, value, price_per_share, rival_commission;

do{
	printf("Enter number of shares: ");
	scanf("%d", &number_shares);
	if(number_shares == 0) break;
	printf("Enter price_per_share (no dollar sign): ");
	scanf("%f", &price_per_share);

	value = number_shares * price_per_share;
	
	if (value < 2500.00)
		commission = 30.00 + .017 * value;
	else if (value < 6250.00)
		commission = 56.00 + .0066 * value;
	else if (value < 20000.00)
		commission = 76.00 + .0034 * value;
	else if (value < 50000.00)
		commission = 100.00 + .0022 * value;
	else if (value < 500000.00)
		commission = 155.00 + .0011 * value;
	else
		commission = 255.00 + .0009 * value;

	if (commission < 39.00)
		commission = 39.00;

	printf("Commission: $%.2f\n", commission);

	if(number_shares < 2000)
		rival_commission = 33.00 + .03 * number_shares;
	else
		rival_commission = 33.00 + .02 * number_shares;

	printf("Rival Commission: $%.2f\n", rival_commission);
} while (number_shares != 0);

	return 0;

}
