#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *p, const void *q);

int main()
{
	int a[] = {98, 23, 45, 11, 65,32}, i, n;

	n = sizeof(a)/sizeof(int);

	qsort(a, n, sizeof(int), compare_int);

	for (i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}

	return 0;
}

int compare_int(const void *p, const void *q) {
	return ( * (int *)p - *(int *)q );
}
