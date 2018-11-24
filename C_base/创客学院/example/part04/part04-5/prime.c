#include <stdio.h>
#include <math.h>

int main()
{
	int n, i;

	while (1) {
		printf("input a num(-1-exit):");
		scanf("%d", &n);

		if (n == -1)
			break;

		for (i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
				break;
		}
		if (i <= sqrt(n)) {
			printf("%d - no\n", n);
		}
		else {
			printf("%d - yes\n", n);
		}
	}

	return 0;
}
