#include <stdio.h>

int get_sum(int n, int m, int data[][m]);

int main() 
{
	int a[2][3]= {{2, 8, 3}, {7, 4, 6}}, sum;

	sum = get_sum(2, 3, a);

	printf("sum=%d\n", sum);

	return 0;
}

int get_sum(int n, int m, int (*data)[m]) { //int (* data)[m] = a;
	int ret = 0, i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			//ret += data[i][j];
			ret += *(*(data + i)+j);
		}
	}

	return ret;
}
