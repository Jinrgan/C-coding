#include <stdio.h>

void fun(int);

int main()
{
	int m = 10;

	fun(m);
	printf("main m=%d\n", m);

	return 0;
}

void fun(int a) { //int a = m;
	a++;
	printf("fun a=%d\n", a);
}
