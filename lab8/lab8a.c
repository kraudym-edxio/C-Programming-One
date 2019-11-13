/*
	Lab 8: Part A
	Created by: Edxio Kraudy 
	Date: November 9, 2019
*/

#include <stdio.h>
#include <math.h>
float area (int r);

//Variable Declaration
int r;

int main (void) {

	//Ask the user for radius input
	printf("Please enter a radius to determine the area of the circle: ");
	scanf("%d", &r);

	//Print the area of the circle
	printf("The area of a circle with radius %d is %.2f\n", r, area(r));

}

//Area function
float area (int r) {

	return (r * r * 3.14159);

}
