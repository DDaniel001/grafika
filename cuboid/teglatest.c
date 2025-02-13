#include "teglatest.h"

#include <math.h>

void set_circle_data(Teglatest* teglatest, double a, double b, double c)
{
	teglatest->a = a;
	teglatest->b = b;
    teglatest->c = c;
	
}

double calc_circle_area(const Teglatest* teglatest)
{
	double area = teglatest->c * teglatest->b * teglatest->a;
	return area;
}