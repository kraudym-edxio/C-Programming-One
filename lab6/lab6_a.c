//Output will be 1*3*9*27*81*

#include <stdio.h>

int main(void) {

	int i = 1;

	while (i <= 136) {
		printf("%d*", i);
		i *= 3;
	}
}
