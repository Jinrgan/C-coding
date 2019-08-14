#include <stdio.h>

void swap(int *, int *);

int main()
{
	int m = 10, n = 20;

	swap(&m, &n);
	
	printf("main m=%d n=%d\n", m, n);

	return 0;
}

void swap(int *p, int *q) {//int *p = &m, *q = &n;
	int t;
	t = *p;
	*p = *q;
	*q = t;
}
