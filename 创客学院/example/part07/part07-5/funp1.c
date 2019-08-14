#include <stdio.h>

int plus(int a, int b) { return (a + b); }
int minus(int a, int b) {return (a - b); }
double mul(double a, double b) {return (a * b); }

int main()
{
	int m = 30, n = 10;
	int (* p)(int, int);

	p = plus;
	//printf("%d\n", plus(m, n));
	printf("%d\n", (*p)(m, n));

	p = minus;
	//printf("%d\n", minus(m, n));
	printf("%d\n", (*p)(m, n));

	//p = mul;

	return 0;
}
