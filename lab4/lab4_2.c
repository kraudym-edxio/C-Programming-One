#include <stdio.h>

int main(void) {

	int i1;
	
	printf("Type in an integer to determine whether it's even or odd: ");
	scanf("%d", &i1);

	if (i1 % 2 == 0) {
		printf("The integer %d is even. \n", i1);
	}
	
	else {
		printf("The integer %d is odd. \n", i1);
	}

}
