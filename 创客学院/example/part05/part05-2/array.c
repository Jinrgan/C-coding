#include <stdio.h>

int main() 
{
	int a[3][2], i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++)
			printf("%p\n", &a[i][j]);
	}
	printf("%d\n", sizeof(a));

	return 0;
}

