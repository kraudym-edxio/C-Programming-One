#include <stdio.h>

int main (void) {
	
	char letter;

	printf("Enter any lowercase letter: ");
	scanf("%c", &letter);

	letter = letter - 32; 
	printf("%c\n", letter);
	
}
