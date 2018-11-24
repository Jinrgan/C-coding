#include <stdio.h>

int main()
{
	const int m = 10;//m readonly
	const int * p = &m;
	//int * const p = &m;

	//m++;

	//*p = 100;
	printf("m=%d %d\n", m, *p);

	return 0;
}
