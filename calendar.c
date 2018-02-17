//Chapter 6 Exercise 8

#include <stdio.h>

int main(){

	int days_in_month, day_of_week;

	printf("Enter number of days in month: ");
	scanf("%d", &days_in_month);
	printf("Enter starting day of the week (1=Sun, 7 = Sat): ");
	scanf("%d", &day_of_week);


	for(int i = 1, j = 1; i < days_in_month + day_of_week; i++){
			if(i < day_of_week) printf("   ");
			else {
				printf("%3d", j);
			j++;
			}
			if(i % 7 == 0) printf("\n");
	}
	printf("\n");

	return 0;
}
	
