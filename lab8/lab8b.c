/*
	Lab 8: Part B
	Created by: Edxio Kraudy
	Date: November 9, 2019
*/

#include <stdio.h>
long fact (int num);

//The minimum range of values for long ints is –2147483647 to +2147483647.

int main (void) {

	int num;

	printf("Factorial of 2 is %ld.\n", fact(2));
	printf("Factorial of 3 is %ld.\n", fact(3));
	printf("Factorial of 4 is %ld.\n", fact(4));
	printf("Factorial of 5 is %ld.\n", fact(5));		
	printf("Factorial of 10 is %ld.\n", fact(10));
	printf("Factorial of 15 is %ld.\n \n", fact(15));

	printf("Enter a positive integer to determine its factorial: ");
	scanf("%d", &num);

	printf("Factorial of %d is %ld\n", num, fact(num));

}

//Factorial function
long fact (int num) {

	long step;
	long save = num;	

	for (int a = num - 1; a >= 1; a--) {	

		step = save * a;
		save = step;

	}

	return save;

}
