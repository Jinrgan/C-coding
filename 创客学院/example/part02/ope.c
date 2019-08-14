#include <stdio.h>

int main()
{
	int a = 15, b = 8, c = 0;

	c = a++;
	printf("c=%d a=%d\n", c, a);

	c = ++b;
	printf("c=%d b=%d\n", c, b);

	c = ++a + b++;
	printf("c=%d b=%d a=%d\n", c, b, a);

	return 0;
}
