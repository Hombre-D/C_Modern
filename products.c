#include <stdio.h>

main(){
	int itemNumber, m, d, y;
	float unitPrice;

	printf("Enter item number: ");
	scanf("%d", &itemNumber);
	printf("Enter unit price: ");
	scanf("%f", &unitPrice);
	printf("Enter purchase date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%-6d\t\t$%8.2f\t\t%d/%d/%d\n", itemNumber, unitPrice, m, d, y);

	return 0;

}
