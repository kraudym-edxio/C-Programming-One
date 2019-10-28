#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(void) {

	//Showing the player a Welcome Message
	printf("Welcome to the Nine-Gaps game!...\n");
	printf("*******\n");
	printf("*****\n");
	printf("***\n");
	printf("*\n \n");

	//Start loop regarding game difficulty
	int difficulty;
	int valid;
	int gameState;	

	//Variable Initialization regarding sentinel game values	
	gameState = 0;
	valid = 0;

	while (gameState == 0) {  

		/* Ask the player to select the level of difficulty. The player can 
		choose from the following difficulties: beginner, intermediate, 
		advanced, and expert. */

		while (valid == 0) { //Start While for difficulty
				
			printf("What difficulty would you like to play in? (1. Beginner, 2. Intermediate, 3. Advanced, 4. Expert): ");
			scanf("%d", &difficulty);
	
			if (difficulty == 1) {
				valid++;
				printf("Beginner difficulty selected\n");
			}
	
			else if (difficulty == 2) {
				valid++;
				printf("Intermediate difficulty selected\n");
			}

			else if (difficulty == 3) {
				valid++;
				printf("Advanced difficulty selected\n");
			}

			else if (difficulty == 4) {
				valid++;
				printf("Expert difficulty selected\n");
			}

			else {
				printf("Invalid difficulty input\n \n");
			}

		} //End While for difficulty
		
		//Variable Initialization regarding position and value 
		int row, column, num;
		int check = 0;
		int entry;
		
		while (check == 0) {
		
			//User Inputs Row and Column Value	
			printf("\nEnter a row value: ");
			scanf("%d", &row);
	
			if (row == 0) { //If user enters zero terminate loop
				break;
			}
				
			printf("\nEnter a column value: ");		
			scanf("%d", &column);

			if (column == 0) { //If user enters zero terminate loop
				break;
			}

			//If Statement for User Inputs
			if (row >= 1 && row <= 3 && column >= 1 && column <= 3) {
				
				entry = 0;
				
				while (entry == 0) {
					
					//User Inputs Integer Value
					printf("\nEnter a value between [1,9]: ");
					scanf("%d", &num);
	
					if (num == 0) { //If user enters zero breaks out of two loops via goto command
						check++;
						break;
					}
				
					if (num >= 1 && num <= 9) {
						printf("\nThe number %d will be allocated at postion (%d,%d)\n", num, row, column);
					
						//Display a success message
						printf("Success!...\n");
						entry++;
					}

					else {
						printf("Invalid entry, please try again...\n");
					}
				
				}

			}

			else {
				printf("Invalid entry, please try again...\n");
			}
	

		}

		int replay;
		
		//Replay Option/Prompt
		printf("\nWould you like to play again? (1. Yes, 2. No): ");
		scanf("%d", &replay);

		if (replay == 1) {
			printf("Play Again selected\n \n");
			
			//Restart Game- reinitialize variables to sentinel value
			check = 0;
			valid = 0;
			gameState = 0;
		}	

		else {
			//Goodbye and Quit
			gameState++;
			printf("See you soon! Goodbye!...\n \n");
		}

	}

	return 0;

}
