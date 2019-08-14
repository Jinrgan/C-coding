#include <stdio.h>

int fac(int n);

int main() 
{
	int n;

	while (scanf("%d", &n) == 1) {
		printf("%d!=%d\n", n, fac(n));
	}

	return 0;
}

int fac(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}

	return (n * fac(n-1));
}
