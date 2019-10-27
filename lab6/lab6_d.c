/*Output will be: 1234567891011121314151617181920

#include <stdio.h>

int main(void) {
	
	int n = 20;
	int result = 0;

	for (int i = 1; i<= n; i++) {
		result += 1;
		printf("%d", result);
	}

}
