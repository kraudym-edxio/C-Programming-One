/*Case 2 is not selected because after case 1 is executed, i = 2 and (2 < 2) is not true, thus the while loop terminates */

/*The loop executes twice because there are two breaks and two instances where i < 2. These iternations are 0 < 2 and 1 < 2 */

#include<stdio.h>

int main(void) {

	int i = 0; 
	while(i < 2) 
	switch(i) {

		i = 2;
		case 0:
		printf("Hi. This is case 0 \n");
		i++;
		break;

		case 1:
		printf("Hi. This is case 1 \n");
		i++;
		break;

		case 2:
		printf("Hi. This is case 2 \n");
		i++; 
		break;

		default:
		printf("Hi. This is default \n");
		i++;
		break;
	
	}

}	
