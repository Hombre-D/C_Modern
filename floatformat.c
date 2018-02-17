#include <stdio.h>


main()
{
	float x;
	printf("Enter a floating point number: ");
	scanf("%f", &x);

	printf("Version 1: |%-8.1e|\n", x);
	printf("Version 2: |%10.6e|\n", x);
	printf("Version 3: |%-8.3f|\n", x);
	printf("Version 4: |%6.0f|\n", x);

	return 0;
}
	
