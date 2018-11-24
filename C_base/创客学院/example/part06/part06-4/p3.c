#include <stdio.h>

int main()
{
	int a[2][4] = {{2, 6, 1, 9}, {3, 9, 3, 5}}; // a[0]  a[1]

	int (* p)[4] = a;

	printf("%p %p\n", a, a+1);
	printf("%p %p\n", p, p+1);

	printf("a[1][1]=%d %d %d %d\n", a[1][1], *(a[1]+1), 
			*(*(p+1)+1), *(p[1]+1));

	puts("");

	return 0;
}
