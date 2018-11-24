#include <stdio.h>

int main()
{
	int a[2][3] = {{2, 6, 9}, {3, 9, 5}};
	int * p, i, n;

	n = sizeof(a) / sizeof(int);
	p = &a[0][0];

	for (i = 0; i < n; i++ ) {
		printf("%d ", *(p+i));
	}

	puts("");

	return 0;
}
