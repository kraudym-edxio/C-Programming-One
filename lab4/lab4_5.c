#include <stdio.h>

int main(void) {

	//Variable Declaration	
	int position;
	long ISBN;
	int mult; 
	long div;
	long extracted;
	long final;
	int sum;
	int check;

	//Get the first tweleve digits of ISBN-13 number from user	
	printf("Enter the first twelve digits of ISBN-13 to determine the check digit: ");
	scanf("%12ld", &ISBN);
	
	//Initializing Variables
	position = 0;
	mult = 1;
	div = 100000000000;
	sum = 0;
	check = 0;
	
	//While loop begins here
	while (position <= 11) {
			
		 
		//Multiplier Logic- multiplying even positions by (1) and odd postions by (3)
		if (position % 2 == 0) {
			mult = 1;
		}
		
		else {	
			mult = 3;
		}
		//End Multiplier Logic

//Debug		printf("(%d)[%d]\n", mult, position);					

		extracted =  ( (ISBN / div) % 10);
		final = extracted * mult;
		sum = sum + final;	

//Debug		printf("%ld * %d = %ld\n", extracted, mult, final);
			
		position++;
		div = div / 10;
	
//Debug		printf("%ld\n", div);
		
	}
		
	check = 10 - (sum % 10);
	
	printf("Check digit is: %d\n", check);

}
