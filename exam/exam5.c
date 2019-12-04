#include <stdio.h>

int digit_sum (int n);

int main (void) {

	int n;

	printf("Enter an integer to determine the sum of its digits: ");
	scanf("%d", &n);
	
	printf("Sum of digits is %d\n", digit_sum(n));

}

int digit_sum (int n) {

	int sum = 0;
	int rem;

	while (n != 0) {

		rem = n % 10;
		sum = sum + rem;
		n = n / 10;

	}	
	
	return sum;

}
