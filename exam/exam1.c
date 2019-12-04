#include <stdio.h>

int summation (int n);
int sum = 0;

int main (void) {

	int n;

	printf("Enter a number to find the sum from 1 to (n - 1): ");
	scanf("%d", &n);

	printf("Sum from 1 to (%d - 1) is %d\n", n, summation(n));

}

int summation (int n) {

	for (int c = 1; c <= n - 1; c++) {
		sum = sum + c;
	}

	return sum;

}
