#include <stdio.h>

int main() 
{
	int a[] = {99, 56, 100, 5, 23, 46, 71, 42}, i, j, n, t, index;

	n = sizeof(a) / sizeof(int);

	for (i = 0; i < n-1; i++) {
		index = 0;
		for (j = 0; j < n-1-i; j++) {
			if (a[index] < a[j+1]) {
				index = j+1;
			}
		}
		if (index != (n-1-i)) {
			t = a[n-1-i];
			a[n-1-i] = a[index];
			a[index] = t;
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
