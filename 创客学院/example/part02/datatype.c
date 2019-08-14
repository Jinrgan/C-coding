#include <stdio.h>
#include <limits.h>

int main() 
{
	int sum = 10, n = 6;

	printf("%d %d %d %d\n", sizeof(char), sizeof(int), sizeof(double), sizeof(short));
	printf("%d %d \n", INT_MAX, INT_MIN);

	printf("%d packets transmitted, %d received, %.0f%% lost;\n", sum, n, 
			(float)(sum - n) / sum * 100);
			
	return 0;
}
