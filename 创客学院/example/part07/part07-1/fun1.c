#include <stdio.h>

int display(int );

int main()
{
	int m = 10;
	//r = display(m+10);
	//printf("%d\n", r);
	printf("%d\n", display(m+10));

	return 0;
}

int display(int a) {
	printf("welcome %d\n", a);
	return ++a;
}

