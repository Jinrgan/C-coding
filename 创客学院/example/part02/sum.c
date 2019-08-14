#include <stdio.h>

int main() {
	int i = 1, sum = 0, n = 10;

	for (i = 1; i <= n; i++) {
		sum += i;
	}

	printf("%s %s %d\n", __FILE__, __FUNCTION__, __LINE__);
	printf("%d\n", sum);

	return 0;
}
