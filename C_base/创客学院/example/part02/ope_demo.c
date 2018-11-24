#include <stdio.h>

int main()
{
	int a = 15, b = 8;

	if (b <= 10 || ++a) {
		printf("if:a=%d b=%d\n", a, b);
	}
	else {
		printf("else:a=%d b=%d\n", a, b);
	}


	return 0;
}
