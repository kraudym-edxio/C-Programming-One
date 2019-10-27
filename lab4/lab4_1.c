#include <stdio.h>

int main(void) {

	int i1, i2, remain;

	printf("Type in two integers to find their division remainder: ");
	scanf("%d %d", &i1, &i2);

	remain = i1 % i2;
	printf("Remainder of %d divided by %d is %d.\n", i1, i2, remain);

}
