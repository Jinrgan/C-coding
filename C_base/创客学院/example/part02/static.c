#include <stdio.h>

extern int global_b;
extern int global_b;

void fun()
{
	static int m;
	m++;
	printf("m=%d &m=%p\n", m, &m);
}

int main()
{
	fun();
	fun();

	printf("global_a = %d \n", global_a);
	printf("global_b = %d \n", global_b);

	return 0;
}
