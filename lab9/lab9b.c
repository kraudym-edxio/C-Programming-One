#include <stdio.h>

int main (void) {

	{
		int x = 10;
	}
	
	{
		printf("%d", x);
	}

}

/* 
	There will be no output for the following C code
	This is so because the integer x does not exist within 
	the set of curly brackets that the print statement is 
	contained within.
*/
