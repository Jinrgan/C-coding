#include <stdio.h>

int main() 
{
	int m = 123;
	float n = 123.456;
	char arr[] = "Hello World!";


	printf("%08d\n%-8d\n%2d\n", m, m, m);
	printf("%f %.2f\n", n, n);
	printf("%s\n%.5s\n", arr, arr);

	return 0;
}
