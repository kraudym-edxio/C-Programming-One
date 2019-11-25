#include <stdio.h>
#include <math.h>

int lab_9(int x);

int main(void)
{
	int x, y;

	printf("Enter a positive integer number: ");
	scanf("%d", &x);
	
	y = lab_9(x);

	printf("%d\n", y);
}

int lab_9(int x)
{
	int digit = (int) log10(x); 
	
	if (x == 0)
      		return 0;
    	
	return ((x % 10 * pow(10, digit)) + lab_9(x / 10));
}

/*
	The output of the following C code will be displaying the user's 
	number input backwards. It will keep repeating the function
	int lab_9(int x) until the value of x == 0. 
*/	
