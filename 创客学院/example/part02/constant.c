#include <stdio.h>

int main()
{
	//int m = 3356;
	//int m = ;
	int m = 0xd1c;
	float n = 1.176e+10;
	char ch1 = 'A', ch2;

	ch1 = 'A' + 32;
	ch1++;

	ch2 = 'b' - ' ';

	printf("m=%d %#o %#x\n", m, m, m);
	printf("n=%.3f %e\n", n, n);
	printf("ch1=%c %d; ch2=%c %d\n", ch1, ch1, ch2, ch2);

	return 0;
}
