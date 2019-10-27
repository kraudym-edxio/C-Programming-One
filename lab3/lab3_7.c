#include <stdio.h>

int main(void)
{
	int i1;
	int i2;
	int sum;
	int subt;
	int mult;
	int division;

	printf("Edxio Kraudy,\nkraudym,\n");
	printf("Enter an integer: ");
	scanf("%d",&i1);

	printf("Enter another integer: ");
	scanf("%d",&i2);

	sum = i1 + i2;
	printf("%d + %d = %d\n\n", i1, i2, sum);

	subt = i2 - i1;
	printf("%d - %d = %d\n\n", i2, i1, subt);

	mult = i1 * i2;
	printf("%d * %d = %d\n\n", i1, i2, mult);

	division = i1 / i2;
	printf("%d / %d = %d\n\n", i1, i2, division);
	
	return 0;
}
