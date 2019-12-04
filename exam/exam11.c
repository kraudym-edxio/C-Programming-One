#include <stdio.h>
#include <math.h>

double distance (double x1, double y1, double x2, double y2); 

int main (void) {

	double x1, y1, x2, y2;

	printf("Enter two coordinate pairs (x,y): ");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

	printf("The custom distance between these two points is %.2f\n", distance(x1, y1, x2, y2));

	return 0;

}

double distance (double x1, double y1, double x2, double y2) {

	double section = pow(x2 - x1, 5) + pow(y2 - y1, 5);

	section = sqrt(section);

	return section;

}
