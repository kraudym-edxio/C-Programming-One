#include <stdio.h>

int main (void) {
	
	int day;

	printf("Enter an integer in the range to display the corresponding day: ");
	scanf("%d", &day);
	
	if (day == 1) {
		printf("Monday\n");
	}

	else if (day == 2) {
		printf("Tuesday\n");
	}

	else if (day == 3) {
		printf("Wednesday\n");
	}

	else if (day == 4) {
		printf("Thursday\n");
	}

	else if (day == 5) 	{
		printf("Friday\n");
	}

	else if (day == 6) {
		printf("Saturday\n");
	}

	else if (day == 7) {
		printf("Sunday\n");
	}	

	else {
		printf("Invalid entry\n");
	}
	
}
