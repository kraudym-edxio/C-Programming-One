/*
	Lab 8: Part B
	Created by: Edxio Kraudy
	Date: November 9, 2019
*/


#include <stdio.h>

//The minimum range of values for long ints is –2147483647 to +2147483647.

long fact (int num) {

	long step;
	long save = num;	

	for (int a = num - 1; a >= 1; a--) {	

		step = save * a;
		save = step;

	}

	return save;

}

int main (void) {

	int num;
	
	printf("Enter a positive integer to determine its factorial: ");
	scanf("%d", &num);

	printf("Factorial of %d is %ld\n", num, fact(num));

}
