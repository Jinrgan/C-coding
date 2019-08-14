#include <stdio.h>

int main()
{
	int i = 1, sum = 0;

	while (1) {
		sum += i;
		if (i >= 100)
			goto next;
		i++;
	}

next:
	printf("sum=%d\n", sum);

	return 0;
}
