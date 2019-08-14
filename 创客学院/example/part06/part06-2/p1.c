#include <stdio.h>

int main() 
{
	int m = 10;
	int * p = &m;

	double n = 3.14;
	double * q = &n;

	printf("sizeof(int)=%d\n", sizeof(int));
	printf("m=%d &m=%p\n", m, &m);
	printf("p=%p p+2=%p\n", p, p+2);

	printf("sizeof(double)=%d\n", sizeof(double));
	printf("n=%.2lf &n=%p\n", n, &n);
	printf("q=%p q+2=%p\n", q, q+2);

	return 0;
}
