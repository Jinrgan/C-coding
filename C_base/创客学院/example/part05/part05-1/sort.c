#include <stdio.h>

int main() 
{
	int a[]= {1, 68, 2, 56, 13, 45, 21, 36, 91, 4}, i, j;
	int n = sizeof(a) / sizeof(int), t;

	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n-1-i ; j++) {
			if (a[j] > a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}

	return 0;
}
