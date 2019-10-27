#include <stdio.h>

int main(void) {

	int a, b, c;

	printf("Input three integers to determine which is the smallest and the largest: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if ( a <= b && b <= c) {
		printf("Smallest: %d\nLargest: %d\n", a, c);
	}
	
	else if (b <= a && a<= c) {
		printf("Smallest: %d\nLargest: %d\n", b, c);
	}

	else if (c <= a && a<= b) {
		printf("Smallest: %d\nLargest: %d\n", c, b);
	}
	
	else if (a <= c && c <= b) {
		printf("Smallest: %d\nLargest: %d\n", a, b);
	}

	else if (b <= c && c<= a) {
		printf("Smallest: %d\nLargest: %d\n", b, a);
	}	
	
	else {
		printf("Smallest: %d\nLargest: %d\n", c, a);
	}

}
