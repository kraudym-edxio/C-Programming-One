/*
	Lab 8: Part C
	Created by: Edxio Kraudy 
	Date: November 9, 2019
*/

#include <stdio.h>

int convert (int num) {

	int save, rem;		
	int arr[100];
	int x = 0;

	save = num; 

	while (1) {
		
		rem = save % 2;
		save = save / 2;
	
		if (save == 0) {
			arr[x] = rem;
			break;
		}

		arr[x] = rem;
		x++;

	}

	while ( x >= 0) {

		printf("%d", arr[x]);
		x--;
	
	}

	printf("\n");
		
	return 0;

}

int main (void) {

	int num;

	printf("Enter any postive decimal number to convert it into binary: ");
	scanf("%d", &num);

	printf("The conversion of %d into binary is: ", num);
	
	return convert(num);

}
