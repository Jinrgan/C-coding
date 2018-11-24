#include <stdio.h>

int main() 
{
	int i = 1, sum = 0;

loop:
	if (i <= 100) {
		sum += i;
		if ( i % 10 == 0)
			goto next;
		i++;
		goto loop;
	}

	printf("1+2+...+100=%d\n", sum);

next:
	printf("i=%d\n", i);

	return 0;
}


