#include <stdio.h>

int x = 2;

void lab_9(int a); 

int main()
{
      	printf("the value of x is: %d\n", x);
     	lab_9(x);
    	printf("the value of x is: %d\n", x);
}

void lab_9(int a)
{
	a = 2;
	x = x * ++a;
}
