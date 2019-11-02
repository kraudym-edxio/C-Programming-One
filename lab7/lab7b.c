/*
	Lab 7 Part B)
	Created by: Edxio Kraudy Mora
	Date: November 1, 2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

	//Variable declaration and initialization
	int c, x, num;
	int freq = 0;
	int arr[30];

	srand(time(NULL));

	//Populating Array with 30 values in range [0,20]	
	for (c = 0; c < 30; c++) {
		x = rand() % 21;
		arr[c] = x;
	}
	
	//Asking user for number input
	printf("Enter a number in the range [0,20]: ");
	scanf("%d", &num);

	//Checking through elements to determine frequency
	for (c = 0; c < 30; c++) {
		
		if (arr[c] == num) {
			freq++;
		}
	
	}

	//Printing array
	for (c = 0; c < 30; c++) {
		printf("%d\n", arr[c]);
	} 
	
	//Displaying the frequency of num
	printf("The frequency of [%d] in the set is %d.\n", num, freq);

}
