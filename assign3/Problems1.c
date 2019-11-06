#include <stdio.h>

int main(void) {

	int arr[9];
	int row, col, num;
	int c = 0;
	
	while (c < 9) {
	
		//Ask user for user input
		printf("Enter a row and column number & an integer value: ");
		scanf("%d %d %d", &row, &col, &num);

		//Statement regarding valid inputs
		if (row >= 0 && row <= 2 && col >= 0 && col <= 2 && num >= 1 && num <= 9) {
			
			//If input embodies first column
			if (col == 0 && row >= 0 && row <= 2) {
				
				if (row == 0) {
					arr[0] = num;
				}

				if (row == 1) {
					arr[3] = num;
				}

				else {
					arr[6] = num;
				}

			}
		
			//If input embodies second column
			else if (col == 1 && row >= 0 && row <= 2) {
				
				if (row == 0) {
					arr[1] = num;
				}

				if (row == 1) {
					arr[4] = num;
				}

				else {
					arr[7] = num;
				}

			}

			//If input embodies third column
			else {

				if (row == 0) {
					arr[2] = num;
				}

				if (row == 1) {
					arr[5] = num;
				}

				else {
					arr[8] = num;
				}

			}

		c++;

		}	
		
		//User typed in an invalid entry	
		else {
			printf("Invalid input, please try again.\n");
		}

	}

	printf("\n");
	
	//Print array in grid form	
	for (int x = 0; x < 9; x++) {
		printf("\t%d", arr[x]);

		if (x == 2 || x == 5  || x == 8) {
			printf("\n");
		}
		
	}

	printf("\n");	

}
