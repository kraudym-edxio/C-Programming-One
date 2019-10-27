#include <stdio.h>

int main (void) {
	
	int input;
	
	int counter = 0;
	int sum = 0;
	float average = 0;		
	
	while (counter < 10) {

		printf("Enter an integer value: \n");	
		scanf("%d", &input);
		sum = sum + input;
		counter++;

	}
	
	average = (float)sum / 10;
	printf("Sum: %d\t Average: %.2f\n", sum, average); 

}
