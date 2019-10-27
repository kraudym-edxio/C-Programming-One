#include <stdio.h>

int main (void) {
	
	int num;
	int c = 0;

	printf("Enter an integer to determine whether it is a prime number: ");
	scanf("%d", &num);
	
	for (int divisor = 2; divisor <= num; divisor++) {
	
		if (num % divisor == 0 && divisor != num ) {
			printf("%d is not a prime number.\n", num);	
			c++;	
			break;
		}
		
	}
	
	while (c == 0) {
		printf("%d is a prime number.\n", num);
		c++;
	}

}
