#include <stdio.h>

int odd_even (int n);

int main (void) {

	int n;

	printf("Enter an integer to determine if its even or odd: ");
	scanf("%d", &n);

	odd_even(n);
	
}

int odd_even (int n) {

	int a = 1;
	
	if (n % 2 == 0) {
		a = 0;
	}

	printf("%d\n", a);

	return 0;

}
