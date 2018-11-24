#include <stdio.h>

int main()
{
	int a[2][3] = {{2, 6, 9}, {3, 9, 5}}; // a[0]  a[1]
	int n;

	n = sizeof(a) / sizeof(int);
	
	printf("%d %d\n", sizeof(a[0]), sizeof(a[1]));
	//a[0]++;
	//a[1]++;

	printf("%p %p\n", a, a+1);

	puts("");

	return 0;
}
