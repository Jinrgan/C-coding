#include <stdio.h>

int main()
{
	int a[] = {5, 9, 2, 19, 3}, i, n, t;
	int * p, * q;

	n = sizeof(a)/sizeof(int);
	p = a; // p = &a[0];
	q = &a[n-1];

	while (p < q) {
		t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}

	p = a;
	for(i = 0; i < n; i++) {
		printf("%d %d %d %d\n", a[i], *(p+i), p[i], *(a+i));
	}

	p++;
	printf("%d\n",p[1]);//p[1] a[2]?

	return 0;
}
