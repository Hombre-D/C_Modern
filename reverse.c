//Reverses a series of numbers. Modified for exercise 8-5

#include <stdio.h>
#define N 10

int main()
{
	int a[N], i;
	#define SIZE (sizeof(a) / sizeof(a[0]))

	printf("Enter %d numbers: ", N);
	for (i = 0; i < SIZE; i++)
		scanf("%d", &a[i]);

	printf("In reverse order: ");
	for (i = SIZE - 1; i >=0; i--)
		printf(" %d", a[i]);
	printf("\n");

	return 0;
}
