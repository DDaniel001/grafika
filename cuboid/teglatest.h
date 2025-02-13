#ifndef TEGLATEST_H
#define TEGLATEST_H

typedef struct Teglatest
{
	double a;
	double b;
	double c;
} Teglatest;

void set_teglatest_data(Teglatest* teglatest, double a, double b, double c);

double calc_teglatest_area(const Teglatest* teglatest);

#endif