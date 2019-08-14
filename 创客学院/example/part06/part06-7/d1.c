#include <stdio.h>

int main()
{
	int m = 10;
	int * p;
	int ** q;
	int *** r;

	p = &m;
	q = &p;
	r = &q;

	printf("%d %d %d %d\n", m, *p, **q, ***r);
	return 0;
}
