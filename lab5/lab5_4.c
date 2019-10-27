#include <stdio.h>

int main (void) {
		
	int num;
	int mult;

	printf("Enter an integer to generate its multiplication table: ");
	scanf("%d", &num);
	
	for (int i = 0; i < 11; i++) {
		mult = num * i;
		printf("%d x %d = %d\n", num, i, mult);
	}

}
