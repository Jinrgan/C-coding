#include <stdio.h>
#include <math.h>

int main() 
{
	int n, i;

	printf("input a integer");
	scanf("%d", &n);

	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			break;
	}

	if (i > sqrt(n)){
		printf("%d\n", n);
	}

	return 0;
}
