#include <stdio.h>

int main (void) {
		
	int row, number_of_rows, col;
	
	printf("Enter an integer value to display a right triangle: ");	
	scanf("%d", &number_of_rows);

	for (row = 1; row <= number_of_rows; row++) {
		
		for (col = 1; col <= row; col++) {	
			printf("*");
		}	
		
		printf("\n");

	}

}
