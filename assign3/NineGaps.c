/* 
	NineGaps.c
	Completed by: Edxio Kraudy Mora
	Date: Thursday November 14, 2019
*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(void) {

	char check_game = 1;
	int i, j;
	
	int level;
	int play_again;
	int missing_count;	
	
	int row_results[3];
	int column_results[3];

	do {
		check_game = 1;
	        level = 0;

		//Showing the player a Welcome Message
        	printf("Welcome to Nine-Gaps game!...\n");
		printf("*****************************\n");
        	printf("      *****************      \n");
		printf("            *****            \n");
		printf("              *              \n");
	
	        //Get the level of difficulty from the user
        	do{
			printf("\nChoose the level of difficulty (1-Beginner, 2-Intermediate, 3-Advanced, 4-Expert): ");
			scanf("%d",&level);
		   
			if ((level < 1) || (level > 4))
				puts("The entered value is not valid");
		   
			else {
		        
				switch (level) {
		           		
					case 1:
		                	puts("You have chosen the beginner level");
					missing_count = 3;
		                	break;
		            
					case 2:
		                	puts("You have chosen the intermediate level");
		                	missing_count = 5;
					break;
		
			            	case 3:
		                	puts("You have chosen the advanced level");
		                	missing_count = 7;
					break;
		            
					case 4:
		               		puts("You have chosen the expert level");
					missing_count = 9;
					break;
		        
				}
				
				break;
			}

	    	} while (1);
	
		/////////////////////////////////////////////////////////////////////////////
		// 1.Generate a random main board by shuffling the main_board

		printf("\n");
	
		int main_board[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
		int random_1, random_2;
		int swap;

		srand(time(NULL));		

		for (int a = 0; a < 50; a++) {
		
			random_1 = rand() % 9;
			random_2 = rand() % 9;
	
			swap = main_board[random_1];
			main_board[random_1] = main_board[random_2];
			main_board[random_2] = swap;
	
		}

		/////////////////////////////////////////////////////////////////////////////
		// 2. Generate random operators (+, -, *) 
	
		char operators_array[12];

		for (int g = 0; g <= 11; g++) {
			
			int rand_num = rand() % 3;
			
			if (rand_num == 0) {
				operators_array[g] = '+';
			}

			else if (rand_num == 1) {
				operators_array[g] = '-';
			}

			else {
				operators_array[g] = '*';
			}

		}

		/////////////////////////////////////////////////////////////////////////////	
		// 3. Calculate the results in columns and rows
	
		//Calculating the row results
		int oper_counter = 0;
		int row_index = 0;
		int pos; 

		row_results[0] = main_board[0];
		row_results[1] = main_board[3];
		row_results[2] = main_board[6];
	
		for (pos = 0; pos <= 7; pos++) {
		
			//Determining the operator needed	
			if (operators_array[oper_counter] == '+') {
				row_results[row_index] = row_results[row_index] + main_board[pos+1];
			}

			else if (operators_array[oper_counter] == '-') {
				row_results[row_index] = row_results[row_index] - main_board[pos+1];
			}

			else { 
				row_results[row_index] = row_results[row_index] * main_board[pos+1];	
			}		

			oper_counter++;	
	
			//Checking for a row switch
			if (oper_counter == 2 || oper_counter == 4) {
				pos++;
				row_index++;
			} 	
		
			//Check to see if all six operators regarding rows have been looped through
			if (oper_counter == 6) {
				break;
			}
		
		}

		//Calculating the column results 
		oper_counter = 6;
		pos = 3;	

		int column_index = 0;
		int oper_value = 6;

		column_results[0] = main_board[0];
		column_results[1] = main_board[1];
		column_results[2] = main_board[2];
	
		while (oper_counter < 12) {
		
			//Determining the operator needed	
			if (operators_array[oper_value] == '+') {
				column_results[column_index] = column_results[column_index] + main_board[pos];
			}

			else if (operators_array[oper_value] == '-') {
				column_results[column_index] = column_results[column_index] - main_board[pos];
			}

			else { 
				column_results[column_index] = column_results[column_index] * main_board[pos];	
			}		
			
			oper_value = oper_value + 3; 
			pos = pos + 3;
			oper_counter++;	
	
			//Checking for a column switch
			if (oper_counter == 8) {
				pos = 4;
				column_index++;
				oper_value = 7;
			} 	

			else if (oper_counter == 10) {
				pos = 5;
				column_index++;
				oper_value = 8;
			}
		
		}

		/////////////////////////////////////////////////////////////////////////////
		// 4. Initializing missing_array to 0

		int missing_array[9] = {0};
	
		/////////////////////////////////////////////////////////////////////////////
		// 5. Copy the main_board into game_board
		
		int game_board[9];

		for (int m = 0; m <= 8; m++) {
			game_board[m] = main_board[m];
		}

		/////////////////////////////////////////////////////////////////////////////
		
		//Based on the selected difficulty, 3, 5, or 7 board values will be hidden		
		i = 0; // initializing i to 0
    
		while (i < level*2+1) {								

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

		for (int b = 0; b <= 8; b++) {
			temp_board[b] = game_board[b];
		}

		/////////////////////////////////////////////////////////////////////////////
	
		//The inner loop to get values from the user

		j = 0;
	
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
                       				printf("= %d", row_results[i]); //Show the rows results
               			}
                
				printf("\n");
                
				if (i == 2)
                   			printf (" =\t\t =\t\t =\n");    
		
			}
	
			for (i = 0 ; i < 3; i++) //Show the columnar results
				printf(" %d\t\t", column_results[i]);
          		
			printf("\n---------------------------------------------------\n");
		
			/////////////////////////////////////////////////////////////////////////////
			// 7. Display the missing values and update the missing_count variable
		
			printf("List of Missing Values:\n");			

			for (int display = 0; display <= 8; display++) {
				
				if (missing_array[display] != 0) {	
					printf("%d\t", missing_array[display]);	
				}

			}

			printf("\n---------------------------------------------------\n");
		
			/////////////////////////////////////////////////////////////////////////////
			// 8. Break if the missing values are empty 
	
			if (missing_count == 0) {
				break;
			}	
			
			/////////////////////////////////////////////////////////////////////////////

			//Get the user's guess (location and value) and check inputs' validity
 		
			int r, c, v;

			printf("Enter a row number (1-3), column number (1-3), and a missing value: ");
	        	scanf("%d %d %d", &r, &c, &v);
	        
			if (r==0 || c==0 || v==0)
	         		break;
	        
	       		if (r < 1 || r > 3 || c < 1 || c > 3){
	            		printf("Invalid row and/or column numbers. Try again.\n \n");
	           	 	continue;
	        	}
	        
	       		if (v < 1 || v > 9) {
	           		printf("Invalid cell value. Try again.\n \n");
	           		continue;
	        	}
	        
	       		if (missing_array[v-1]<1) {
	            		printf("This is not a missing value. Try again.\n \n");
	            		continue;
	        	}

			/////////////////////////////////////////////////////////////////////////////
			/* 9. If the selected cell is changeable, add the value into the cell and remove
			it from the missing values, in other case show an error and repeat the inner loop */

			//If input embodies first row
			int del;
				
			if (r == 1) {

				if (c == 1 && temp_board[0] == '?') {
					temp_board[0] = v;	
				}

				else if (c == 2 && temp_board[1] == '?') {
					temp_board[1] = v;
				}

				else if (c == 3 && temp_board[2] == '?') {
					temp_board[2] = v;
				}

				else {
					printf("Cell is not changeable, try again.\n \n");
					continue;			
				}
		
				//Removing guessed value from missing_array		
				for (del = 0; del <= 8; del++) {

					if (missing_array[del] == v) {
						missing_array[del] = 0;
					}

				}

				//Update missing count
				missing_count--;

			}	
		
			//If input embodies second row
			else if (r == 2) {
				
				if (c == 1 && temp_board[3] == '?') {
					temp_board[3] = v;	
				}

				else if (c == 2 && temp_board[4] == '?') {
					temp_board[4] = v;
				}

				else if (c == 3 && temp_board[5] == '?') {
					temp_board[5] = v;
				}

				else {
					printf("Cell is not changeable, try again.\n \n");
					continue;
				}
			
				//Removing guessed value from missing_array		
				for (del = 0; del <= 8; del++) {

					if (missing_array[del] == v) {
						missing_array[del] = 0;
					}

				}

				//Update missing count
				missing_count--;

			}

			//If input embodies third row
			else {
	
				if (c == 1 && temp_board[6] == '?') {
					temp_board[6] = v;
				}

				else if (c == 2 && temp_board[7] == '?') {
					temp_board[7] = v;
				}

				else if (c == 3 && temp_board[8] == '?') {
					temp_board[8] = v;
				}

				else {
					printf("Cell is not changeable, try again.\n \n");
					continue;
				}
	
				//Removing guessed value from missing_array	
				for (del = 0; del <= 8; del++) {

					if (missing_array[del] == v) {
						missing_array[del] = 0;
					}

				}

				//Update missing count
				missing_count--;

			}	

			/////////////////////////////////////////////////////////////////////////////
				
		} while (1); //End of inner loop

        	/////////////////////////////////////////////////////////////////////////////
		// 10. Check the results

		for (int final = 0; final <= 8; final++) {		

			if (temp_board[final] != main_board[final]) {
				check_game = 0;
				break;
			}
		
		}

		/////////////////////////////////////////////////////////////////////////////
		
		if (check_game) //Display Winning/Losing Message
            		printf ("**** Congratulations, you won!!! ****\n");
        
		else
            		printf ("Numbers were allocated incorrectly, you lose.\n");
        
        	printf("#############################################\n");
        	printf("Would you like to play again? (Yes:1, No:0)\n"); //Ask the user to play again
        	printf("#############################################\n");
       		scanf("%d", &play_again);
         	
        	if (!play_again) {
            		printf("Bye!\n");
           	 	break;
        	}

	} while (1); //End the outer loop

}
