#include <stdio.h>

int main()
{
	int a[2][3] = {{1, 9, 4}, {9, 1, 6}};
	int * p[2];//p[0] p[1]----int *
	int i, j, sum = 0;

	p[0] = &a[0][0];
	p[1] = &a[1][0];

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++){
			printf("%d %d ", a[i][j], *(p[i]+j));
			sum += *(p[i]+j);
		}
		puts("");
	}
	printf("sum=%d\n", sum);

	printf("%d\n", sizeof(p));


	return 0;
}
