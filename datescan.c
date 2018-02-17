#include <stdio.h>

main()
{
	int m, d, y;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("You entered the date %.2d%.2d%.2d\n", m, d, y);

	return 0;
}
