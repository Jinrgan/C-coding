#include <stdio.h>
#include <math.h>

int main() 
{
	int n, i,  ret;

	while (1) {
		printf("input a integer(-1--exit):");
		ret = scanf("%d", &n);
		if (ret == 0) {
			printf("input error! input again!\n"); 
			getchar();
			continue;
		}

		if(n == -1)
			return 0;

		for (i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
				break;
		}

		if (i > sqrt(n)){
			printf("%d-yes\n", n);
		}
		else {
			printf("%d-no\n", n);
		}
	}

	return 0;
}
