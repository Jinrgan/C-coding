#include <stdio.h>

int main()
{
	char ch = 'A';
	int m = 10;

	void * p;

	p = &ch;//p = (void *)&ch
	printf("ch=%c %c\n", ch, *(char *)p);

	p = &m;
	printf("m=%d %d\n", m, *(int *)p);

	return 0;
}
