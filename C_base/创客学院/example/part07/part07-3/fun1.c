#include <stdio.h>

//int get_sum(int data[], int n); 
int get_sum(int * data, int n); 

int main() 
{
	int a[]= {2, 8, 3, 7, 4, 6}, i, n, sum;

	n = sizeof(a) / sizeof(int);

	sum = get_sum(a, n);

	for (i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}

	printf("sum=%d\n", sum);

	return 0;
}

int get_sum(int data[], int n) {
	int ret = 0, i;

	for (i = 0; i < n; i++) {
		ret += *(data+i);
	}

	return ret;
}
