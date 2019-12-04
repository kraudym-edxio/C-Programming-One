#include <stdio.h>

int factors (int n);

int sum = 0;

int main (void) {

	int n;

	printf("Enter an integer to determine its factors: ");
	scanf("%d", &n);

	factors(n);

}

int factors (int n) {

	for (int c = 1; c < n; c++) {
		
		if (n % c == 0) {
			printf("%d ", c);
			sum = sum + c;
		}

	}

	printf("\nThs sum of its factors is %d\n", sum);

	return 0;

}
