//A Program that prints even squares of a list n. Chp 6 Ex 6

#include <stdio.h>

int main(){

	int n, x;

	printf("Enter a number: ");
	scanf("%d", &n);

	for(x = 1; x < n; x++){
		int square;
		square = x * x;
		if(square % 2 == 0 && square <= n)
			printf("%d\n", square);
	}

	return 0;

}
