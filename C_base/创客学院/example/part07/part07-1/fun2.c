//#include <stdio.h>
#include "head.h"
//double power(double, int);

int printf(const char *format, ...);

int main()
{
	double a = 2;
	int b = 5;

	printf("%lf\n", power(a, b));

	return 0;
}

double power(double x, int n ) {
	double r = 1;
	int i;

	for (i = 0; i < n; i++) {
		r *= x;
	}

	return r;
}

