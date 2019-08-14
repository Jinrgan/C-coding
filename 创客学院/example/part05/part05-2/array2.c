#include <stdio.h>

int main() 
{
	//int a[3][2] = {{1, 3}, {2, 6}, {5, 9}};
	//int a[3][2] = {{1, 3}, {2} };
	int a[][2] = {{1, 3}, {2} };
	int i, j;

	printf("sizeof(a)=%d\n", sizeof(a));

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

