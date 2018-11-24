#include <stdio.h>

int main() 
{
	int m = 10;

	int * p = &m;//int * p; p = &m;

	printf("m=%d &m=%p\n", m, &m);
	printf("p=%p &p=%p %d\n", p, &p, *p);

	return 0;
}
