#include <stdio.h>

int main() 
{
	int a[] = {99, 56, 100, 5, 23, 46, 71, 42}, i, j, n, t;

	n = sizeof(a) / sizeof(int);

	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n-1-i; j++) {
			if (a[j] > a[j+1]) {
				t =a[j]; 
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
