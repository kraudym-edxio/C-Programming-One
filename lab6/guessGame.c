/*
	Guess Game
	Created by: Edxio Kraudy Mora
	Date: October 26, 2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
	
	//New random number every time program is ran
	srand(time(NULL));

	//Variable Declaration and Initialization
	int input;
	int goal = rand() % 51;
	int valid = 1;

	while (valid < 11) { //While allows for a maximum of ten guesses
		
		//Prompt the user to guess a number between [0,50]  
		printf("Enter a number between 0 and 50: ");
		scanf("%d", &input);

		if (input == goal) { //If statement when guess is correct
			printf("You've guessed correctly! The number is %d.\n \nCongratulations, you guessed the number after %d attempts!\n \n", input, valid);
			valid = 11;
		}
		
		else { //Else statement when guess is wrong
			
			if (input < goal) { //If statement when too low
				printf("Your guess was too low! You have %d guesses left.\n \n", 10 - valid);
				valid++;

				if (valid == 11) { //All guesses used up
					printf("You lost the game! All ten attempts were used. The number was %d.\n \n", goal);
				}

			}

			else { //Else statement when too high
				printf("Your guess was too high! You have %d guesses left.\n \n", 10 - valid);
				valid++;
				
				if (valid == 11) { //All guesses used up
					printf("You lost the game! All ten attempts were used. The number was %d.\n \n", goal);
				}

			}

		}

	}

}
