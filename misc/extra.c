#include <stdio.h>

int main(void) {

	int i = 12;
	int j = ++i;
	int k = i++;

	printf("i = %d, j = %d, k = %d\n \n", i, j, k);

	for (int x = 0; x <= 5;) {
		printf("The value of x is %d\n", x++);
	}

}
