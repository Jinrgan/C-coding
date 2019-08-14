#include <stdio.h>
#include <limits.h>

int main() 
{
	printf("%d %d %d %d %d %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long), 
			sizeof(float), sizeof(double));

	printf("%d %d %d %d %d %d\n", sizeof(signed char), sizeof(unsigned short), sizeof(unsigned int), sizeof(long), 
			sizeof(float), sizeof(double));

	printf("%d %d\n",INT_MAX, INT_MIN);

	int total= 10, n = 6;

	printf("%d packets transmitted; %d received; %.0lf%% lost;\n", total, n, (float)(total - n) / total * 100);

	return 0;
}
