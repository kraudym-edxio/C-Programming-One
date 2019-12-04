#include <stdio.h>

int main (void) {

	int array[15];
	int count, y;
	int interchange;
		
	printf("Enter fifteen integers to determine the second largest: ");
	
	for (int a = 0; a <= 14; a++) {
		scanf("%d", &array[a]);	
	}

	for (count = 0; count < 14; count++) {

		for (y = 0; y < (15 - count) - 1; y++) {
		
			if (array[y] > array[y + 1]) {
				interchange = array[y];
				array[y] = array[y + 1];
				array[y + 1] = interchange;
			}

		}

	}

	printf("Second largest number is %d\n", array[13]);
	
}
