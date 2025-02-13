#include "teglatest.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
	Teglatest teglatest;
	double area;
	
	set_teglatest_data(&teglatest, 5, 10, 8);
	area = calc_teglatest_area(&teglatest);
	
	printf("Cuboid area: %lf\n", area);
	
	return 0;
}
