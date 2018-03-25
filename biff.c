#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch, input[50];
	int i = 0, j;	
	
	printf("Enter a message: \n");
	ch = getchar();
	while (ch != '\n'){
		input[i] = toupper(ch);
		i++;
		ch = getchar();
	}

	printf("Your message: \n");
	for(j = 0; j <= i; j++){
		switch(input[j]){
			case 'A':	input[j] = '4';
						break;
			case 'B':	input[j] = '8';
						break;
			case 'E':	input[j] = '3';
						break;
			case 'I':	input[j] = '1';
						break;
			case 'O':	input[j] = '0';
						break;
			case 'S':	input[j] = '5';
						break;
			default:	break;
		}
		
		printf("%c", input[j]);
	}

	printf("!!!!!!!!!\n");

	return 0;
}
