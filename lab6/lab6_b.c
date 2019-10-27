/*Output will be:
11---12---13---14---15
16---17---18---19---20
*/ 

#include <stdio.h>

int main(void) {
	
	int x = 11;

	while (x <= 20) {
		
		if (x % 5 == 0) {
			printf("%d\n", x++);
		}

		else {
			printf("%d---", x++);
		}	

	}

}
