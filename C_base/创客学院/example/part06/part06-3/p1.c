#include <stdio.h>

int main()
{
	int a[] = {5, 9, 2, 19, 3}, i, n;
	int * p;

	n = sizeof(a)/sizeof(int);
	p = a; // p = &a[0];

	for(i = 0; i < n; i++) {
		printf("%d %d %d %d\n", a[i], *(p+i), p[i], *(a+i));
	}

	p++;
	//a++;

	return 0;
}
