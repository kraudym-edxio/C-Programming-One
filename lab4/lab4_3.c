#include <stdio.h>

int main(void) {

	int year;

	printf("Type in a year to determine whether it is a leap year: ");
	scanf("%d", &year);
	
	//Determine if the year is a century year.
	if (year % 100 == 0) {
	
		if (year % 400 == 0) {
			printf("The year %d is a leap year.\n", year);
		}

		else {
			printf("The year %d is not a leap year.\n", year);
		}

	}	

	//Process if year is not century year. 
	else {

		if (year % 4 == 0) {
			printf("The year %d is a leap year.\n", year);
		}

		else {
			printf("The year %d is not a leap year.\n", year);
		}	

	}

}
