#include <stdio.h>

int main (void) {	

	int array[10];
	int sum;	

	//Ask user to input ten integers
	printf("Enter ten integers to determine the sum of the odd numbers in the even index positions: ");

	//Scan the ten user inputed integers	
	for (int x = 0; x < 10; x++) {
		scanf("%d", &array[x]);
	}

	for (int y = 0; y < 10; y++) {

		if (array[y] % 2 != 0 && y % 2 == 0 ) {
			sum = sum + array[y];
		}
		
	}

	printf("Sum of odd numbers in even index positions is %d\n", sum);

}
