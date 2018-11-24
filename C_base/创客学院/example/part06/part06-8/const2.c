#include <stdio.h>

int main()
{
	int m = 10, n= 20;
	const int * p = &m;
	int * const q = &m;
	const int * const r = &m;

	//*p = 100;//*p readonly
	printf("m=%d %d\n", m, *p);

	p = &n;
	printf("%d\n", *p);

	*q = 200;
	printf("m=%d %d\n", m, *q);

	//q = &n;//q readonly
	printf("%d\n", *q);

	//*r = 1000;
//	r = &n;

	return 0;
}
