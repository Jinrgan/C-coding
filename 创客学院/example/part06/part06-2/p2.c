#include <stdio.h>

int main() 
{
	int m = 10;
	int * p = &m, * q;
	double n = 3.14, * r = &n;

	q = p + 2;

	printf("sizeof(int)=%d\n", sizeof(int));
	printf("m=%d &m=%p\n", m, &m);
	printf("p=%p p+2=%p\n", p, p+2);

	printf("q=%p q-p=%d\n", q, q-p);
	//printf("r=%p r-q=%d\n", r, r-q);


	return 0;
}
