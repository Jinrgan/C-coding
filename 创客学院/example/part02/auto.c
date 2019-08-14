#include <stdio.h>

void fun()
{
	auto int m = 100;
	printf("fun: m=%d\n", m);
}

int main()
{
	register int n = 200;
	if (1)
	{
		auto int m = 10;
		printf("main: m=%d\n", m);
	}

	fun();

	printf("n=%d %p\n", n, &n);

	return 0;
}
