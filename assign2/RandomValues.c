#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	
	int n, m, y; //Random Numbers & Random Operation 
	int sum, diff, mult; //Answers to Operations
	
	srand(time(NULL));	
	
	printf("\nTwo numbers in the range [1,9]: \n");
		
	//Generates two random numbers in the range [1,9]

	n = (rand() % 9) + 1;
	printf("%d\n", n);
	
	m = (rand() % 9) + 1;
	printf("%d\n", m);
		
	//Computations of the random numbers
	sum = n + m;
	diff = n - m;
	mult = n * m;

	printf("\nA number in the range [0,2]: \n");	

	//Assigning operations based on random number value 
		
	y = (rand() % 3);
	printf("%d ", y);

	if (y == 0) {
		printf("[+]\n");
		printf("\nCalculation: (%d + %d = %d)\n \n", n, m, sum);
	} 
		
	else if (y == 1) {
		printf("[-]\n");	
		printf("\nCalculation: (%d - %d = %d)\n \n", n, m, diff);
	}

	else {
		printf("[*]\n");	
		printf("\nCalculation: (%d * %d = %d)\n \n", n, m, mult);
	}

	return 0;

}
