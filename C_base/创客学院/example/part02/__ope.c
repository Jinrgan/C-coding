#include <stdio.h>

int main()
{
	double a = 15, b = 8, c = 0;

	c = a + b;
	printf("c=%lf\n",c);

	c = a - b;
	printf("c=%lf\n",c);
	
	c = a * b;
	printf("c=%lf\n",c);

	c = a / b;
	printf("c=%lf\n",c);

	c = a % b;
	printf("c=%lf\n",c);

	return 0;
}
