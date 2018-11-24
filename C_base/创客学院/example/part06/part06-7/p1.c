#include <stdio.h>

int main()
{
	int m = 10;
	int * p;
	int ** q;
	int ** * r;

	p = &m;
	q = &p;
	r = &q;

	printf("m=%d %d %d &m=%p\n", m, *p, **q, &m);
	printf("p=%p %p &p=%p\n", p, *q, &p);
	printf("q=%p &q=%p\n", q, &q);

	printf("%p %p\n", p, p+1);
	printf("%p %p\n", q, q+1);
	printf("%p %p\n", r, r+1);

	return 0;
}
