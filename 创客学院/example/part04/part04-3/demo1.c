#include <stdio.h>

int main()
{
	int i = 1, sum = 0;

_loop:
	if (i <= 100 ) {
		sum += i;
		if (i == 10)
			goto next;
		i++;
		goto _loop;
	}

	printf("sum=%d\n", sum);
next:
	printf("next sum=%d\n", sum);

	return 0;
}
