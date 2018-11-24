#include <stdio.h>

#define QUALITY 3.0e-23
#define QUART 950

int main() 
{
	float n;

	printf("input:");
	scanf("%f", &n);

	n = n * QUART / QUALITY;

	printf("total:%e %f\n", n, n);

	return 0;
}
