#include <stdio.h>

int main()
{
	int a = 1234;
	float f = 123.456;
	char ch = 'a';

	printf("%8d, %2d\n", a, a);
	printf("%f\n%8f\n%8.1f\n%.2f\n", f, f, f, f);

	printf("%3c\n", ch);

	return 0;
}
