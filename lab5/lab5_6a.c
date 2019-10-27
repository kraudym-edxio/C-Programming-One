/*Case 2 is not selected because after case 1 is executed, the value of i = 2. The break causes the loop to fallthrough and start from the beginning. Since (2 < 2) is not a true statement, switch(2) will not be executed, thus case 2 is not executed. */

/*The loop will execute one iterations because after case 1, i = 2 and since (2 < 2), the while loop will terminate. */

#include<stdio.h> 

int main(void) {

	int i = 0;
	while(i < 2) 
	switch(i) {	

		i = 2;	
		case 0:
		printf("Hi. This is case 0 \n");
		i++;

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
