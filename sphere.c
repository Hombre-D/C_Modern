#include <stdio.h>

#define RATIO (4.0/3.0)
#define PI 3.14159

main()
{
	int radius, cube;
	float volume;

	printf("Enter a radius value: ");
	scanf("%d", &radius);

	cube = radius * radius * radius;
	volume = RATIO * PI * cube;

	printf("Volume = %.5f\n", volume);

	return 0;


}
