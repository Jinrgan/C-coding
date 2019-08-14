#include <stdio.h>

int main()
{
	int n, ret = 0;

	while (1) {
		printf("please choose:");
		ret = scanf("%d", &n);
		if (ret == 0) {
			getchar();
			continue;
		}
		printf("n=%d\n", n);
	}

	return 0;
}
