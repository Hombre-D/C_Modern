#include <stdio.h>

main()
{
	int h, m, am_pm = 0;
	printf("Enter a 24-hour time (hh:mm): ");
	scanf("%d:%d", &h, &m);

	else if(h == 12) am_pm = 1;

	else if(h > 12){
		h = h -12;
		am_pm = 1;
	}

	printf("Equivalent 12-hour time: %.2d:%.2d ", h, m);
	if(am_pm == 0) printf("AM\n");
	else printf("PM\n");


	return 0;
}
