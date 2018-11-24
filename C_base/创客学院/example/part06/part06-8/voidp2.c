#include <stdio.h>

int main()
{
	int a[] = {2, 9, 3, 7, 6}, i, n;
	void * p;

	n = sizeof(a) / sizeof(int);
	p = a;

	for (i = 0; i < n; i++) {
		printf("%d\n", *((int *)p+i));
	}


	return 0;
}
