#include <stdio.h> 

int main(void)	
{
	int x = 1;
	int y = 2; 
	int z = 3;
	printf("x = %d, y = %d, z = %d\n", x , y, z);
	{
		x = 10;
		y = 15.000000;
		z = 4;
		printf("x = %d, y = %d.000000, z = %d\n", x , y, z);
		{
			z = 50;
			printf("x = %d, y = %d.000000, z = %d\n", x , y, z);
		}
	}
}	
