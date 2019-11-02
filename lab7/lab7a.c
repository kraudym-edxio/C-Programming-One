/*
	Lab 7 Part A)
	Created by: Edxio Kraudy Mora
	Date: November 1, 2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	//Variable declaration and initialization
	int num, count, y;
	long random[100];
	int interchange;

	srand(time(NULL));

	//Ask the user for a postive integer input
	printf("Enter a positive integer value: ");
	scanf("%d", &num);
	
	//Generate num amount of integers to store in array
	printf("\nUnsorted List:\n");
	
	for (count = 0; count < num; count++) {
		random[count] = rand();
		printf("%ld\n", random[count]);
	}
	
	//Start timer/initialize
	clock_t time  = clock();
	
	//Bubble Sort Process
	for (count = 0; count < num - 1; count++) {
	
		for (y = 0; y < (num - count) - 1; y++) {
			
			//Potential Swapping of Numbers
			if (random[y] > random[y + 1]) {
				interchange = random[y];
				random[y] = random[y + 1];
				random[y + 1] = interchange;	
			}
	
		}	

	}

	//Print sorted array
	printf("\nSorted List:\n");	

	for (count = 0; count < num; count++) {
		printf("%ld\n", random[count]);
	}

	//Display elapsed time	
	printf("\nElapsed time: %f seconds.\n", (double) (time) / CLOCKS_PER_SEC);
	
	return 0;
	
}
