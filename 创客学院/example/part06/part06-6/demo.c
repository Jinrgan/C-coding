#include <stdio.h>

int main()
{
	int a[2][4] = {{1, 2, 3, 4},{9, 8, 7, 6}};
	int i, j, sum = 0;;

	int * p[2] = {a[0], a[1]};

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			sum += *(p[i]+j);
		}
	}

	printf("%d\n", sum);

	return 0;
}
