#include <stdio.h>

int main()
{
	int m = 10, n = 20;
	int * p[2];//p[0] p[1]----int *

	p[0] = &m;
	p[1] = &n;

	printf("&m=%p, m=%d %d\n", &m, m, *p[0]);
	printf("&n=%p, n=%d %d\n", &n, n, *p[1]);

	printf("%p %p\n", p, &p[1]);

	return 0;
}
