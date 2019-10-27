/* Output will be sporadic because the integer i was declared to be unsigned.
This means that its value must remain between 0 and 65535. During the last 
iteration of the loop, i = 0 but at the end it gets by one. This is not possible
because an unsigned integer cannot drop below 0. This is why the program outputs
big numbers continuously. */

#include <stdio.h>

int main(void) {
	
	unsigned int i = 5;
	
	for (; i >= 0; i--) {
		printf("%d\n", i);
	}
}
