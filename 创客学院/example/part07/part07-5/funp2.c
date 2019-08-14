#include <stdio.h>

int plus(int a, int b) { return (a + b); }
int minus(int a, int b) {return (a - b); }
double mul(double a, double b) {return (a * b); }

int main()
{
	int m = 30, n = 10;
	int (* p[2])(int, int);

	p[0] = plus;
	printf("%d\n", (*p[0])(m, n));

	p[1] = minus;
	printf("%d\n", (*p[1])(m, n));

	return 0;
}
