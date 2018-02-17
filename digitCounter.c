#include <stdio.h>

main()
{
	int i, j;
	printf("Enter a number: ");
	scanf("%d", &i);

	if(i >= 0 && i <= 9) j = 1;
	else if(i >= 10 && i <= 99) j = 2;
	else if(i >= 100 && i <= 999) j = 3;
	else j = 4;

	printf("The number %d has %d digits.\n", i, j);

	return 0;
}
