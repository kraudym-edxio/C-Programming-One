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

		/////////////////////////////////////////////////////////////////////////////
		// 1.Generate a random main board by shuffling the main_board

		printf("\n");
	
		int main_board[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
		int random_1, random_2;
		int swap;

		srand(time(NULL));		

		for (int i = 0; i < 50; i++) {
		
			random_1 = rand() % 9;
			random_2 = rand() % 9;
	
			swap = main_board[random_1];
			main_board[random_1] = main_board[random_2];
			main_board[random_2] = swap;
	
		}

		/////////////////////////////////////////////////////////////////////////////
		// 2. Generate random operators (+, -, *) 
		// 3. Calculate the results in columns and rows
	
		char operators_array[12];
		int operator;

		for (int missing = 0; missing <= 5; missing++) {
	
			operator = rand() % 3;
		
			if (operator == 0 ) { //Addition
				
			}
	
			else if (operator == 1) { //Subtraction

			}	

			else { //Multiplication

			}

		}
	
		/////////////////////////////////////////////////////////////////////////////
		// 4. Initializing missing array to 0

		int missing_array[9] = {0};	
	
		/////////////////////////////////////////////////////////////////////////////
		// 5. Copy the main_board into game_board
		
		int game_board[9];

		for (int m = 0; m <= 8; m++) {
			game_board[m] = main_board[m];
		}

		/////////////////////////////////////////////////////////////////////////////
		
		//Based on the selected difficulty, 3, 5, or 7 board values will be hidden		
		int i = 0; // initializing i to 0
    
		while (i < difficulty*2+1){								

			int r = rand() % 3;
			int c = rand() % 3;
			
			if (game_board[3*r+c]!='?'){ 
				
				missing_array[game_board[3*r+c]-1]= game_board[3*r+c]; // the hidden values will be added to the set of missing values
				game_board[3*r+c] = '?';
				i++;

			} 

		}

		/////////////////////////////////////////////////////////////////////////////
		// 6. Copy the game board into a temporary board			

		int temp_board[9];

		for (int m = 0; m <= 8; m++) {
			temp_board[m] = game_board[m];
		}

		/////////////////////////////////////////////////////////////////////////////
	
		//The inner loop to get values from the user

		int row_results[3];
		int column_results[3];
		int j = 0;
	
		do { //Beginning of inner loop

			//Display the game board after each update
			printf("Game Board:\n");
       			printf("---------------------------------------------------\n");
            
			for (i = 0; i < 3; i++) {
                	
				if (i > 0) { //Show the column operators
                    			
					for (j = 0; j < 3; j++){
                   			     printf(" %c\t\t", operators_array[3*(i+1)+ j]);
                    			}
                    			
					printf("\n");
                		}	
 
				for (j = 0; j < 3; j++) { //Show the rows
                   
					if (game_board[(i*3)+j]!='?')
                        			printf(" %d\t ", temp_board[(i*3)+j]);
                    
					else if (game_board[(i*3)+j]!=temp_board[(i*3)+j]){
                       				printf(" %d?\t ", temp_board[(i*3)+j]);
                    			}
		
			                else
                        			printf(" ?\t ");
                
                   			if (j < 2)
                        			printf(" %c\t", operators_array[(i*2) + j]);
                    
					else
                       				printf("= %d", column_results[i]); //Show the rows results
               			}
                
				printf("\n");
                
				if (i == 2)
                   			printf (" =\t\t =\t\t =\n");    
		
			}
	
			for (i = 0 ; i < 3; i++) //Show the columnar results
				printf(" %d\t\t", row_results[i]);
          		
			printf("\n---------------------------------------------------\n");
		
			/////////////////////////////////////////////////////////////////////////////
			// 7. Display the missing values and update the missing_count variable
		
			int missing_count;



			/////////////////////////////////////////////////////////////////////////////
			// 8. Break if the missing values are empty 



			/////////////////////////////////////////////////////////////////////////////

			//Get the user's guess (location and value) and check inputs' validity
 		
			int r, c, v;

			printf("Enter a row number (1-3), column(1-3), value(One of the missing values):\n");
	        	scanf("%d %d %d", &r, &c, &v);
	        
			if (r==0 || c==0 || v==0)
	            		break;
	        
	       		if (r < 1 || r > 3 || c < 1 || c > 3){
	            		puts("Invalid row and/or column numbers. Try again.");
	           	 	continue;
	        	}
	        
	       		if (v < 1 || v > 9) {
	           		puts("Invalid cell value. Try again.");
	           		continue;
	        	}
	        
	       		if (missing_array[v-1]<1) {
	            		puts("This value is already there. Try again.");
	            		continue;
	        	}

			/////////////////////////////////////////////////////////////////////////////
			/* 9. If the selected cell is changeable, add the value into the cell and remove
			it from the missing values, in other case show an error and repeat the inner loop */





			/////////////////////////////////////////////////////////////////////////////
				
		} while (1); //End of inner loop which started on line 172

        	/////////////////////////////////////////////////////////////////////////////
		// 10. Check the results




		/////////////////////////////////////////////////////////////////////////////
		
		int replay;
		
		//Replay Option/Prompt
		printf("\nWould you like to play again? (1. Yes, 2. No): ");
		scanf("%d", &replay);

		if (replay == 1) {
			printf("Play Again selected\n \n");
			
			//Restart Game- reinitialize variables to sentinel value
			valid = 0;
			gameState = 0;
		}	

		else {
			//Goodbye and Quit
			gameState++;
			printf("See you soon! Goodbye!...\n \n");
		}

	}

}
